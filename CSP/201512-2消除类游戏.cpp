#include<iostream>
using namespace std;
int main() {
	int n, m, i, j, k;
	cin >> n >> m;
	int a[n][m], b[n][m]; //如果直接在一个数组上横着和竖着分开时处理会有一些交叉点可能会被忽略
	for (i = 0; i < n; i++) { //初始化a和b数组
		for (j = 0; j < m; j++) {
			cin >> a[i][j];
			b[i][j] = a[i][j];
		}
	}
	for (i = 0; i < n; i++) { //横向消除b
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
		if (count >= 3) { //处理该行最后一个也需要消除的情况
			for (k = 1; k <= count; k++) {
				b[i][j - k] = 0;
			}
		}
	}
	for (i = 0; i < m; i++) { //竖向消除b
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
		if (count >= 3) { //处理该列最后一个也需要消除的情况
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