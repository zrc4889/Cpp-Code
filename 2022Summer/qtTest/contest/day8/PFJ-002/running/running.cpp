#include <bits/stdc++.h>
using namespace std;
const int _ = 1e3 + 5;
const int __ = 1e4 + 5;
int dp[_ + __];
// 完全背包？
// 背包问题，由于可能出现负数需要数组偏离
int a[_], b[_], c[_];
int main()
{
    int n, W;
    freopen("running.in", "r", stdin);
    freopen("running.out", "w", stdout);
    cin >> n >> W;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> c[i];
    }
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = W; j >= c[i]; j--)
        {
            // for (int k = 0)
            if (s + a[i] <= W)
                dp[j + __] = max(dp[j + __], dp[j - c[i] + __] + b[i]), s += a[i];
        }
    }
    cout << dp[W + __];
    return 0;
}