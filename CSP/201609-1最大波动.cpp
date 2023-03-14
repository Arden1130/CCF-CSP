#include<iostream>
#include<cmath>
#include<limits.h>
using namespace std;
int main() {
	int n, today, yesterday, max_sub = INT_MIN; //INT_MIN的头文件为limits.h
	cin >> n >> yesterday;
	for (int i = 2; i <= n; i++) {
		cin >> today;
		if (abs(today - yesterday) > max_sub) { //绝对值函数abs头文件为cmath
			max_sub = abs(today - yesterday);

		}
		yesterday = today;
	}
	cout << max_sub;
	return 0;
}