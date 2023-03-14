#include<iostream>
using namespace std;
int main() {
	int n, ans = -1;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n; i++) {
		int s_count = 0, b_count = 0;
		for (int j = 0; j < n; j++) {
			if (a[j] < a[i]) {
				s_count++;
			}
			else if (a[j] > a[i]) {
				b_count++;
			}
		}
		if (s_count == b_count) {
			ans = a[i];
		}
	}
	cout << ans;
	return 0;
}