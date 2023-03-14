#include<iostream>
using namespace std;
int main() {
	int n, count = 0, yesterday, today, tomorrow;
	cin >> n;
	int a[n + 1];
	if (n == 1 || n == 2) {  //题目规定n的下限是1，可n为1或2这不是没有意义吗......
		for (int i = 1; i <= n; i++) {
			cin >> a[i];
		}
		cout << count;
	}
	else {
		cin >> a[1] >> a[2];
		for (int i = 3; i <= n; i++) { //至少有三天的数据才能判断折点
			cin >> a[i];
			yesterday = a[i - 2];  //折点从第二天开始判断
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