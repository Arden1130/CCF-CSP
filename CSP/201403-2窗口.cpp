#include<iostream>
using namespace std;

const int N = 10;//数据规模规定最多10个窗口
struct {
    int x1, y1, x2, y2;
    int num;
}win[N], temp;
int main() {
    int n, m, x, y;
    cin >> n >> m;
    for (int i = n - 1; i >= 0; i--) {
        cin >> win[i].x1 >> win[i].y1 >> win[i].x2 >> win[i].y2;
        win[i].num = n - i;
    }
    for (int i = 0; i < m; i++) {
        cin >> x >> y;
        int flag = 0;
        for (int j = 0; j < n; j++) {  //暴力法移动结构体数组
            if (x >= win[j].x1 && x <= win[j].x2 && y >= win[j].y1 && y <= win[j].y2) {
                cout << win[j].num << endl;
                temp = win[j];
                for (int k = j - 1; k >= 0; k--) {
                    win[k + 1] = win[k];
                }
                win[0] = temp;
                flag = 1;
                break;
            }
        }
        if (flag == 0) {
            cout << "IGNORED" << endl;
        }
    }
    return 0;
}