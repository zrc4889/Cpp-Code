#include <bits/stdc++.h>
using namespace std;
#define int long long
const int _ = 1e3 + 10;
int a[_][_];
int up[_], down[_], f[_];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    f[1] = a[1][1];
    for (int i = 2; i <= n; i++)
        f[i] = f[i - 1] + a[i][1]; // 第一
                                   // for (int i = 1; i <= n; i++)
    for (int j = 2; j < m; j++)
    {
        memset(down, 0, sizeof(down));
        memset(up, 0, sizeof(up)); // 滚动数组每次都有初始
        down[1] = f[1] + a[1][j], up[n] = f[n] + a[n][j];

        for (int i = 2; i <= n; i++)
            down[i] = max(f[i], down[i - 1]) + a[i][j];
        for (int i = n - 1; i >= 1; i--)
            up[i] = max(f[i], up[i + 1]) + a[i][j];

        for (int i = 1; i <= n; i++)
            f[i] = max(down[i], up[i]);
    }
    f[1] += a[1][m];
    for (int i = 2; i <= n; i++)
        f[i] = max(f[i], f[i - 1]) + a[i][m];
    // cout << f[n];
    printf("%lld", f[n]);
    return 0;
}