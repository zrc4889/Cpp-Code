#include <bits/stdc++.h>
using namespace std;
long long n, a[31][31];
int main() {
    cin >> n;
    a[0][0] = 1;
    a[1][0] = 1;
    a[1][1] = 1;
    for (int i = 2; i < n; i++) {
        for (int j = 1; j <= i; j++) {
            a[i][0] = 1;
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < n; i++) {
        cout << a[n - 1][i] << endl;
    }
    return 0;
}