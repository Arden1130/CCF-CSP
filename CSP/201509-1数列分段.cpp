#include<iostream>
using namespace std;
int main() {
	int n, num, last_num, count = 1;
	cin >> n >> num;
	last_num = num;
	for (int i = 2; i <= n; i++) {
		cin >> num;
		if (num == last_num) {
			continue;
		}
		else {
			count++;
			last_num = num;
		}
	}
	cout << count;
}