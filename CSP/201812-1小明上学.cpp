#include<iostream>
using namespace std;
int main() {
    int r, y, g, n, a, b, sum = 0;
    cin >> r >> y >> g >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a >> b;
        if (a == 0 || a == 1) {
            sum += b;
        }
        if (a == 2) {
            sum = sum + b + r;
        }
    }
    cout << sum;
    return 0;
}