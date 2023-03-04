#include<iostream>
#include<cmath>  //幂次方函数是pow(x,y)，头文件是cmath
using namespace std;
int main()
{
	int n;
	double i;
	double num;
	double result=0;
	cin >> n >> i;
	for (int j = 0; j <n + 1; j++) {
		cin >> num;
		result += num / pow(1 + i, j);
	}
	cout << result;
	return 0;

}