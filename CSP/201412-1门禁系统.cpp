#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int n, record;
	cin >> n;
	int a[n + 1]; //n条记录最多也就n个人呗，把a[1]到a[n]设置为标记数组
	memset(a, 0, sizeof(int) * (n + 1));
	int b[n], index = 0; //用来存放结果,index表示当前用来存储的元素下标
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
/* 不过结果不存在b数组里面，输入一个输出一个也是100分
int main(){
	int n,record;
	cin>>n;
	int a[n+1]; //n条记录最多也就n个人呗，把a[1]到a[n]设置为标记数组
	memset(a,0,sizeof(int)*(n+1));
	for(int i=1;i<=n;i++){
		cin>>record;
		a[record]++;
		cout<<a[record]<<" ";
	}
	return 0;
}*/