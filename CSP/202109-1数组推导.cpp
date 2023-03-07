#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int b[n];
	int max = 0, min = 0;
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
		max += b[i];
		if (i == 1) {
			min += b[i];
		}
		else if (b[i] != b[i - 1]) {
			min += b[i];
		}
	}
	cout << max << endl << min;
	return 0;
}