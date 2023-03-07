#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, a[1000];
	cin >> n;
	double sum = 0;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		sum += a[i];
	}
	double average = sum / n;
	double sum2;
	for (int i = 1; i <= n; i++) {
		sum2 += pow(a[i] - average, 2);
	}
	double d = sum2 / n;
	for (int i = 1; i <= n; i++) {
		cout << (a[i] - average) / sqrt(d) << endl;
	}
	return 0;
}