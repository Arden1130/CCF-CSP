#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int x = a[0], y = a[1], min_sub = abs(a[1] - a[0]);//绝对值函数abs头文件cmath
	for (int i = 0; i < n; i++) {  //暴力法
		for (int j = i + 1; j < n; j++) {
			if (abs(a[j] - a[i]) < min_sub) {
				x = a[i];
				y = a[j];
				min_sub = abs(a[j] - a[i]);
			}
		}
	}
	cout << min_sub;
	return 0;
}