#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, x;
    cin >> a >> b >> x;
    int n, res_n = 0;
    n = pow(10, 9);
    cout << n << endl;
    if (a * n + b * 10 <= x) {
        cout << n << endl;
    } else {
        for (int i = 8; i >= 0; i--) {
            for (int j = 9; j >= 0; j--) {
                n = pow(10, i) * j;
                if (a * n + b * (i + 1) <= x - res_n) {
                    res_n += pow(10, i) * j;
                    break;
                }
            }
        }
        cout << res_n << endl;
    }
}