#include<iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int a[n + 1], b[n + 1];
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    b[1] = (a[1] + a[2]) / 2;
    b[n] = (a[n] + a[n - 1]) / 2;
    for (int i = 2; i < n; i++) {
        b[i] = (a[i - 1] + a[i] + a[i + 1]) / 3;
    }
    for (int i = 1; i <= n; i++) {
        cout << b[i] << " ";
    }
    return 0;
}