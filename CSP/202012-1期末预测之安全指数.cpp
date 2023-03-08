#include<iostream>
using namespace std;
int main() {
	int n, w, s, score = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> w >> s;
		score += w * s;
	}
	if (score >= 0) {
		cout << score;
	}
	else cout << "0";
	return 0;
}