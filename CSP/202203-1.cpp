#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n, k, x, y, result = 0;
	cin >> n >> k;
	//int a[n]={0}或者int a[n]={}不都可以将元素初始化为0吗？可是这样写只有70分我真的不懂
	int* a = new int[n];
	memset(a, 0, sizeof(int) * n);//memset函数头文件为cstring
	//当然for循环初始化也可以
	for (int i = 1; i <= k; i++) {
		cin >> x >> y;
		if (y != 0 && a[y] == 0) {
			result++;
		}
		a[x] = 1;
	}
	cout << result;
	return 0;
}