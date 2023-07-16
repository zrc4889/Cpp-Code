#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 5000 + 10;
int a[N], sum[N];
int f[N][N], g[N];
int n, m, k;
signed main()
{
    cin >> n >> m >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum[i] += sum[i - 1] + a[i];
    }
    for (int i = m; i <= n; ++i)
    {
        f[1][i] = sum[i] - sum[i - m]; // 取一段
        g[i] = max(g[i - 1], f[1][i]); // 前缀最大值
    }
    for (int i = 2; i <= k; ++i) // 切k段
    {
        for (int j = m; j <= n; ++j)
        {
            f[i][j] = max(f[i][j], g[j - m] + sum[j] - sum[j - m]);
        }
        memset(g, 0, sizeof(g));
        for (int j = 1; j <= n; ++j)
        {
            g[j] = max(g[j - 1], f[i][j]); // 更新前缀最大值
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, f[k][i]);
    cout << ans << endl;
    return 0;
}