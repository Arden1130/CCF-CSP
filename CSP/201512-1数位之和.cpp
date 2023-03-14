#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	for (int i = 10; i >= 0; i--) {
		sum = sum + n / int(pow(10, i)); //pow函数结果是double型转化成整型
		n = n % int(pow(10, i));
	}
	cout << sum;
	return 0;
}