#include<iostream>
#include<cstring>
using namespace std;
int main() {
	int sum = 0, ans;
	string s;
	cin >> s;  //字符串可以直接cin和cout
	sum += (s[0] - '0');  //不加-'0'和+'0'加的会是该整数字符对应的ASCII码
	for (int i = 2; i <= 4; i++) {
		sum += (s[i] - '0') * i;
	}
	for (int i = 6; i <= 10; i++) {
		sum += (s[i] - '0') * (i - 1);
	}
	ans = sum % 11;
	if ((s[12] - '0') == ans || (ans == 10 && s[12] == 'X')) {
		cout << "Right";
	}
	else {
		if (ans == 10) {
			s[12] = 'X';
		}
		else {
			s[12] = ans + '0';
		}
		cout << s;
	}
}