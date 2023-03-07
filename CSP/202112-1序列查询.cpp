#include<iostream>
using namespace std;
int main() {
	int n, N;
	cin >> n >> N;
	int a[n] = { 0 };
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
	}
	int sum = 0;
	for (int i = 1; i < n; i++) {
		sum += i * (a[i + 1] - a[i]);
	}
	sum += n * (N - a[n]);
	cout << sum;
	return 0;
}