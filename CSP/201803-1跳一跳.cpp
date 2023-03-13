#include<iostream>
using namespace std;
int main() {
	int jump, score = -1, sum = 0;
	for (;;) {
		cin >> jump;
		if (jump == 0) {
			score = -1;
			break;
		}
		else {
			if (jump == 1) {
				score = 1;
			}
			else if (jump == 2 && (score == 1 || score == -1)) {
				score = 2;
			}
			else if (jump == 2 && (score != 1 || score != -1)) {
				score += 2;
			}
			sum += score;
		}
	}
	cout << sum;
	return 0;
}