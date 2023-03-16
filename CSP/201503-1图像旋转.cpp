#include<iostream>
using namespace std;
int main() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {  //有点绕需要认真体会一下
		for (int j = 0; j < n; j++) {
			cout << a[j][m - 1 - i] << " ";
		}
		cout << endl;
	}
	return 0;
}