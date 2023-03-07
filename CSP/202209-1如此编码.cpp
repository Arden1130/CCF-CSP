#include<iostream>
using namespace std;
int main()
{
	int n, m;
	int a[20], b[20], c[20];
	c[0] = 1;
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	for (int i = 1; i <= n; i++)
	{
		c[i] = a[1];
		for (int j = 2; j <= i; j++)
		{
			c[i] *= a[j];
		}
	}
	b[1] = m % c[1] / c[0];
	for (int i = 2; i <= n; i++) {
		int temp = m % c[i];
		for (int j = 1; j < i; j++) {
			temp -= c[j - 1] * b[j];
		}
		b[i] = temp / c[i - 1];
	}
	for (int i = 1; i <= n; i++)
	{
		cout << b[i] << " ";
	}
	return 0;
}