#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, count = 0;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (abs(a[i] - a[j]) == 1) {
				count++;
			}
		}
	}
	cout << count;
	return 0;
}
