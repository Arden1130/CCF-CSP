#include<iostream>
#include<cstring>
using namespace std;
struct {
	int a[5];
	int left = 5; //剩余的连续位置
	int start = 0;//接下来要卖出的位置
}seats[20];
int main() {
	int n, need;
	cin >> n;
	for (int i = 0; i < 20; i++) {
		memset(seats[i].a, 1, sizeof(int) * 5);
	}
	for (int i = 1; i <= n; i++) {
		cin >> need;
		int flag = 0;//标记是否有连续座位
		for (int j = 0; j < 20; j++) {  //有连续座位的情况
			if (seats[j].left >= need) {
				flag = 1;
				seats[j].left -= need;
				while (need-- > 0) {
					seats[j].a[seats[j].start] = 0;
					cout << j * 5 + seats[j].start + 1 << " ";
					seats[j].start++;

				}
			}
		}
		if (flag == 0) {//无连续座位的情况
			for (int j = 0; j < 20; j++) {
				if (left > 0) {
					while (need-- > 0 && seats[j].start++ < 5) {
						seats[j].a[seats[j].start] = 0;
						cout << j * 5 + seats[j].start + 1 << " ";
					}
					if (need == 0) {
						break;
					}
				}
			}
		}
		cout << endl;
	}
	return 0;
}