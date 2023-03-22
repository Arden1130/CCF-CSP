#include<iostream>
#include<cstring>
#include<limits.h>
using namespace std;
int main() {
	int n, x, a[1001], count = 0, index, times; //a[1001]为标记数组的思想
	memset(a, 0, sizeof(int) * 1001); //将a数组置0，头文件为cstring
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		a[x]++;
	}
	for (int i = 0; i <= 1000; i++) {  //计算一共有多少不同的数
		if (a[i] > 0) {
			count++;
		}
	}
	while (count > 0) {
		times = INT_MIN;
		for (int i = 0; i <= 1000; i++) {
			if (a[i] > times) {
				index = i;
				times = a[i];
			}
		}
		a[index] = 0;
		cout << index << " " << times << endl;
		count--;
	}
	return 0;
}