#include<iostream>
#include<cstring>
#include<limits.h>
using namespace std;
int main() {
	int n, number, s[10001], times = INT_MIN, index = 0;
	memset(s, 0, sizeof(int) * 10001);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> number;
		s[number]++;
	}
	for (int i = 1; i <= 10000; i++) {
		if (s[i] > times) {
			times = s[i];
			index = i;
		}
	}
	cout << index;
	return 0;
}