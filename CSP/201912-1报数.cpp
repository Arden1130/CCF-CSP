#include<iostream>
//#include<cstring>
using namespace std;
int main() {
	int n, a[4] = { 0 };
	//memset(a,0,sizeof(int)*4); //Ҳ���Խ�a����Ԫ�س�ʼ��Ϊ0��ͷ�ļ�Ϊcstring
	cin >> n;
	for (int i = 1; i <= n; i++) {
		if ((i % 7 == 0) || ((i % 100) % 10) == 7 || ((i % 100) / 10) == 7 || (i / 100) == 7) { //��λҲ�п�����7
			if (i % 4 == 0) {
				a[3]++;
			}
			else {
				a[i % 4 - 1]++;
			}
			n++;
		}
	}
	for (int i = 0; i < 4; i++) {
		cout << a[i] << endl;
	}
	return 0;
}