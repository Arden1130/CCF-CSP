#include<iostream>
using namespace std;
int main() {
	int n, count = 0, yesterday, today, tomorrow;
	cin >> n;
	int a[n + 1];
	if (n == 1 || n == 2) {  //��Ŀ�涨n��������1����nΪ1��2�ⲻ��û��������......
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		cout << count;
	}
	else {
		cin >> a[1] >> a[2];
		for (int i = 3; i <= n; i++) { //��������������ݲ����ж��۵�
			cin >> a[i];
			yesterday = a[i - 2];  //�۵�ӵڶ��쿪ʼ�ж�
			today = a[i - 1];
			tomorrow = a[i];
			if ((today - yesterday) * (tomorrow - today) < 0) {
				count++;
			}
		}
		cout << count;
	}
	return 0;
}