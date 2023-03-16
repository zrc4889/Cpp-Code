#include <bits/stdc++.h>
using namespace std;
int f[105][105];
int m,n;
void solve()
{
    cin >> m >> n;
    // m 个苹果
    // n 个潘总
    for (int i = 1; i <= m; i++)
    {
        // 潘总只有一个，都只有一个方案
        f[1][i] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        f[i][0] = f[i][1] = 1;

        // 苹果0个或1个都只有一个fan
    }
    for (int i = 2; i <= n; ++i)
    {
        for (int j = 2; j <= m; ++j)
        {
            if (i > j)
            {
                f[i][j] = f[j][j];

                // 几个潘总用不到，取苹果
            }
            else
            {
                f[i][j] = f[i - 1][j] + f[i][j - i];
                // 一个潘总不放
            }
        }
    }
    cout << f[n][m] << endl;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}