#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int a[100][100], n, x1, y1, x2, y2, count = 0;
	memset(a, 0, sizeof(int) * 100 * 100);
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int j = x1; j < x2; j++) {
			for (int k = y1; k < y2; k++) {
				a[j][k] = 1;
			}
		}
	}
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (a[i][j] == 1) {
				count++;
			}
		}
	}
	cout << count;
	return 0;
}