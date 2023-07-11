#include <bits/stdc++.h>
using namespace std;

using namespace std;

int n, m, k;
const int _ = 1e5 + 10;
int a[_], f[_][101];

signed main()
{
    freopen("bright.in", "r", stdin);
    freopen("bright.out", "w", stdout);

    cin >> n >> m >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            f[i][j] = INT_MIN / 3;

    for (int i = 1; i <= n; ++i)
    {
        f[i][1] = max(f[i - 1][1], a[i]); // 先给它读入
        for (int j = 2; j <= min(i, m); ++j)
            f[i][j] = max(max(f[i - 1][j], f[i][j]), f[i - k][j - 1] + a[i]);
            // 前i个数里面选j个
            // i - k 位置差大于等于 
    }
    cout << f[n][m];
}