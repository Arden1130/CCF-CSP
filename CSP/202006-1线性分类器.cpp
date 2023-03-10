#include<iostream>
using namespace std;
int main() {
	int n, m, x, y, p0, p1, p2;
	char c;
	cin >> n >> m;
	int a[999][2], b[999][2];
	int size_a = 0, size_b = 0;
	for (int i = 1; i <= n; i++) {
		cin >> x >> y >> c;
		if (c == 'A') {
			a[size_a][0] = x;
			a[size_a][1] = y;
			size_a++;
		}
		else {
			b[size_b][0] = x;
			b[size_b][1] = y;
			size_b++;
		}
	}
	for (int i = 1; i <= m; i++) {
		cin >> p0 >> p1 >> p2;
		int flag = 1;
		long long a1 = p0 + p1 * a[0][0] + p2 * a[0][1]; //这题要注意可能有10^12数量级的数出现，用int会爆得0分
		long long b1 = p0 + p1 * b[0][0] + p2 * b[0][1]; //CSP认证平台int和long都是四字节取值为2*10^9,long有8个字节取值为9*10^18
		for (int j = 1; j < size_a; j++) {
			if (a1 * (p0 + p1 * a[j][0] + p2 * a[j][1]) < 0) {
				flag = 0;
				break;
			}
		}
		if (flag == 1) {
			for (int j = 1; j < size_b; j++) {
				if (b1 * (p0 + p1 * b[j][0] + p2 * b[j][1]) < 0) {
					flag = 0;
					break;
				}
			}
		}
		if (flag == 1) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}

