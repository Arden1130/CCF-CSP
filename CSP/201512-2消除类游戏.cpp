#include<iostream>
using namespace std;
int main() {
	int n, m, i, j, k;
	cin >> n >> m;
	int a[n][m], b[n][m]; //���ֱ����һ�������Ϻ��ź����ŷֿ�ʱ�������һЩ�������ܻᱻ����
	for (i = 0; i < n; i++) { //��ʼ��a��b����
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	for (i = 0; i < n; i++) { //��������b
		int num, count = 1;
		num = a[i][0];
		for (j = 1; j < m; j++) {
			if (a[i][j] == num) {
				count++;
			}
			else {
				if (count >= 3) {
					for (k = 1; k <= count; k++) {
						b[i][j - k] = 0;
					}
				}
				num = a[i][j];
				count = 1;
			}
		}
		if (count >= 3) { //����������һ��Ҳ��Ҫ���������
			for (k = 1; k <= count; k++) {
				b[i][j - k] = 0;
			}
		}
	}
	for (i = 0; i < m; i++) { //��������b
		int num, count = 1;
		num = a[0][i];
		for (j = 1; j < n; j++) {
			if (a[j][i] == num) {
				count++;
			}
			else {
				if (count >= 3) {
					for (k = 1; k <= count; k++) {
						b[j - k][i] = 0;
					}
				}
				num = a[j][i];
				count = 1;
			}
		}
		if (count >= 3) { //����������һ��Ҳ��Ҫ���������
			for (k = 1; k <= count; k++) {
				b[j - k][i] = 0;
			}
		}
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			cout << b[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}