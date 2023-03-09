#include<iostream>
#include<cstring>
#include<cmath>
#include<limits.h>
using namespace std;
int main() {
	int n, X, Y, x, y;
	cin >> n >> X >> Y;
	double d[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> x >> y;
		d[i] = pow((x - X), 2) + pow((y - Y), 2);
	}
	for (int time = 0; time < 3; time++) { //暴力法
		double min = INT_MAX; //INT_MAX是整形最大值，头文件为limits.h，这里强制转为double
		int location = 1;
		for (int i = 1; i <= n; i++) {
			if (d[i] < min) {
				location = i;
				min = d[i];
			}
		}
		cout << location << endl;
		d[location] = INT_MAX;
	}
	return 0;
}