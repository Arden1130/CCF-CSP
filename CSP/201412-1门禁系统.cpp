#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n, record;
	cin >> n;
	int a[n + 1]; //n����¼���Ҳ��n�����£���a[1]��a[n]����Ϊ�������
	memset(a, 0, sizeof(int) * (n + 1));
	int b[n], index = 0; //������Ž��,index��ʾ��ǰ�����洢��Ԫ���±�
	for (int i = 1; i <= n; i++) {
		cin >> record;
		a[record]++;
		b[index] = a[record];
		index++;
	}
	for (int i = 0; i < index; i++) {
		cout << b[i] << " ";
	}
	return 0;
}
/* �������������b�������棬����һ�����һ��Ҳ��100��
int main(){
	int n,record;
	cin>>n;
	int a[n+1]; //n����¼���Ҳ��n�����£���a[1]��a[n]����Ϊ�������
	memset(a,0,sizeof(int)*(n+1));
	for(int i=1;i<=n;i++){
		cin>>record;
		a[record]++;
		cout<<a[record]<<" ";
	}
	return 0;
}*/