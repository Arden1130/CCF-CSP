#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int n, min, max;
	cin >> n;
	int a[n + 1];
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	if (a[1] < a[n]) {
		min = a[1];
		max = a[n];
	}
	else {
		min = a[n];
		max = a[1];
	}
	if (n % 2 == 1) {
		int mid = a[n / 2 + 1];
		printf("%d %d %d", max, mid, min);
	}
	else {
		float mid = (a[n / 2] + a[n / 2 + 1]) / 2.0;
		if (mid - int(mid) != 0) {
			printf("%d %.1f %d", max, mid, min);
		}
		else {
			printf("%d %d %d", max, int(mid), min);
		}
	}
	return 0;
}
