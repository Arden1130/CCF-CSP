#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n, k, x, y, result = 0;
	cin >> n >> k;
	//int a[n]={0}����int a[n]={}�������Խ�Ԫ�س�ʼ��Ϊ0�𣿿�������дֻ��70������Ĳ���
	int* a = new int[n];
	memset(a, 0, sizeof(int) * n);//memset����ͷ�ļ�Ϊcstring
	//��Ȼforѭ����ʼ��Ҳ����
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