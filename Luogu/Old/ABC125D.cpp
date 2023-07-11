#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 114514;
int a[_];
int f[_][3];

signed main()
{
    // start here..
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    f[1][0] = a[1], f[1][1] = -a[1];

    for (int i = 2; i <= n; i++)
    {
        // 如果不操作第 i 位。
        f[i][0] = max(f[i - 1][0] + a[i], f[i - 1][1] - a[i]);
        // 如果上一位不操作，相邻的不用改变，直接加上。
        // 如果上一位操作了，？

        // 如果操作第 i 位。
        f[i][1] = max(f[i - 1][0] - a[i], f[i - 1][1] + a[i]);
        // 上一位不操作后的最大值，加上取反。
        // 上一位操作过的最大值可以直接加 。
    }

    // for (int i = 1; i <= n; i++)
    //     cout << a[i] << ' ';
    // cout << endl;
    // for (int i = 1; i <= n; i++)
    //     cout << f[i][0] << ' ';
    // cout << endl;
    // for (int i = 1; i <= n; i++)
    //     cout << f[i][1] << ' ';
    // cout << endl;
    cout << f[n][0] << endl;

    return 0;
}