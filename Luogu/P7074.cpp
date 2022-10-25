#include <bits/stdc++.h>
#define int long long
const int _ = 5e3 + 10;
using namespace std;
int n, m;
int dp[_][_]; // dp i, j 走到 i 行 j 列最大总和多少
int a[_][_];
int x[_], y[_];
signed main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    // ;
    // freopen("number.in", "r", stdin);
    // freopen("number.out", "w", stdout);
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    dp[1][1] = a[1][1];
    for (int i = 2; i <= n; i++)
        dp[i][1] = dp[i - 1][1] + a[i][1];
    for (int j = 2; j <= m; j++)
    {
        // x[] 从上到下
        // y[] 从下到上
        // memset(0, x, sizeof(x));
        // memset(0, y, sizeof(y));
        x[1] = dp[1][j - 1] + a[1][j];
        // 第一个就是继承左侧的数据
        for (int i = 2; i <= n; i++)
            x[i] = max(dp[i][j - 1], x[i - 1]) + a[i][j];

        y[n] = dp[n][j - 1] + a[n][j];
        // 最后一个继承左侧的数据
        for (int i = n - 1; i >= 1; --i)
            y[i] = max(dp[i][j - 1], y[i + 1]) + a[i][j];

        for (int i = 1; i <= n; i++)
            dp[i][j] = max(x[i], y[i]);
    }
    cout << dp[n][m] << endl;
    return 0;
}