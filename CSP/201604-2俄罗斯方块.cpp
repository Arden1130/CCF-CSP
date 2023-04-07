#include<iostream> //目前30分 逻辑应该有问题
using namespace std;
int main() {
	int i, j, n, a[15][10], b[4][4];
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 10; j++) {
			cin >> a[i][j];
		}
	}
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			cin >> b[i][j];
		}
	}
	cin >> n;
	int start_a = 14;
	for (i = 3; i >= 0; i--) {
		for (j = 0; j < 4; j++) {
			if (b[i][j] == 1) {
				while (a[start_a - 3 + i][n - 1 + j] != 0) {
					start_a--;
				}
			}
		}
	}
	int start_b;
	for (i = 3; i >= 0; i--) {
		for (j = 0; j < 4; j++) {
			if (b[i][j] == 1) {
				start_b = i;
				goto label;
			}
		}
	}
label:
	for (i = start_b; i >= 0; i--) {
		for (j = 0; j < 4; j++) {
			if (b[i][j] == 1) {
				a[start_a - start_b + i][n - 1 + j] = 1;
			}
		}
	}
	for (i = 0; i < 15; i++) {
		for (j = 0; j < 10; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}