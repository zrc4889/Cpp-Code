#include <bits/stdc++.h>
using namespace std;
const int _ = 1001;
int dp[_][_];
int v, n, k;
int a[_], b[_], c[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> v >> n >> k;
    for (int i = 1; i <= k; i++)
        cin >> a[i] >> b[i] >> c[i];
    // 体积 质量 卡路里
    // dp[i][j] 定义 质量为i空间为j时的卡路里的最大值
    for (int i = 1; i <= n; i++)
        for (int j = v; j >= a[i]; j--) // 质量
            for (int t = n; t >= b[i]; t--) // 体积
                dp[j][t] = max(dp[j][t], dp[j - a[i]][t - b[i]] + c[i]);
                // 0-1 背包换一个思路
    cout << dp[v][n];
    return 0;
}