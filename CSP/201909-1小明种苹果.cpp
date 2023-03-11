#include<iostream>
#include<limits.h>
using namespace std;
int main() {
	int n, m, sum;
	cin >> n >> m;
	int original[n + 1] = { 0 }, reduce[n + 1] = { 0 };
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j <= m; j++) {
			int input;
			cin >> input;
			if (j == 0) {
				original[i] = input;
			}
			else {
				reduce[i] += input;
			}
		}
	}
	int min = INT_MAX; //Í·ÎÄ¼þlimits.h
	int index = 1;
	for (int i = 1; i <= n; i++) {
		sum = sum + original[i] + reduce[i];
		if (reduce[i] < min) {
			index = i;
			min = reduce[i];
		}
	}
	cout << sum << " " << index << " " << min * -1;
	return 0;
}