#include<iostream>
using namespace std;
int main() {
	int n, k, weight, count = 0, sum = 0;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) {
		cin >> weight;
		sum += weight;
		if (sum >= k) {
			count++;
			sum = 0;
		}
		if (i == n && sum < k && sum != 0) {
			count++;
		}
	}
	cout << count;
	return 0;
}