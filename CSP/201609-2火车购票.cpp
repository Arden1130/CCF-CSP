#include<iostream>
#include<cstring>
using namespace std;
struct {
	int a[5];
	int left = 5; //ʣ�������λ��
	int start = 0;//������Ҫ������λ��
}seats[20];
int main() {
	int n, need;
	cin >> n;
	for (int i = 0; i < 20; i++) {
		memset(seats[i].a, 1, sizeof(int) * 5);
	}
	for (int i = 1; i <= n; i++) {
		cin >> need;
		int flag = 0;//����Ƿ���������λ
		for (int j = 0; j < 20; j++) {  //��������λ�����
			if (seats[j].left >= need) {
				flag = 1;
				seats[j].left -= need;
				while (need-- > 0) {
					seats[j].a[seats[j].start] = 0;
					cout << j * 5 + seats[j].start + 1 << " ";
					seats[j].start++;

				}
			}
		}
		if (flag == 0) {//��������λ�����
			for (int j = 0; j < 20; j++) {
				if (left > 0) {
					while (need-- > 0 && seats[j].start++ < 5) {
						seats[j].a[seats[j].start] = 0;
						cout << j * 5 + seats[j].start + 1 << " ";
					}
					if (need == 0) {
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}