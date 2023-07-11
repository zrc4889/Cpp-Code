#include <bits/stdc++.h>
using namespace std;

const int _ = 1001;
int a[_][_], f[_][_];
int n;

int main()
{
    // start here..
    cin >> n;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= i; j++)
            cin >> a[i][j];

    // f 数组默认外面就是 0

    for (int i = n; i >= 1; i--)
        for (int j = 1; j <= i; j++)
            f[i][j] = a[i][j] + max(f[i + 1][j], f[i + 1][j + 1]);

    cout << f[1][1] << endl;

    return 0;
}