#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n, m, l, a;
	cin >> n >> m >> l;
	int* flag = new int[l];  //标记数组大小是l
	memset(flag, 0, sizeof(int) * (l));
	for (int i = 0; i < n * m; i++) {
		cin >> a;
		flag[a]++;
	}
	for (int i = 0; i < l; i++) {
		cout << flag[i] << " ";
	}
	return 0;
}