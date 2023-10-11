#include <bits/stdc++.h>
#define int long long
#define INF -1e16
using namespace std;

const int _ = 1e3 + 1;
int f[_][_][2];
int a[_];

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    // f[1][1][0] = 0, f[1][1][1] = a[1]; 这里对了嗷

    // 无效转移值

    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= k; j++)
            f[i][j][0] = f[i][j][1] = INF; // ？

    f[1][1][1] = a[1], f[1][0][0] = 0;

    for (int i = 2; i <= n; i++)
    {
        f[i][0][0] = 0;
        for (int j = 1; j <= k; j++)
        {
            f[i][j][0] = max(f[i - 1][j][1], f[i - 1][j][0]);

            if (f[i - 1][j - 1][0] != INF)

                f[i][j][1] = f[i - 1][j - 1][0] + a[i];
        }
    }

    int ans = max(f[n][k][0], f[n][k][1]);

    if (ans == INF)
        cout << "NO" << endl;
    else
        cout << ans;

    return 0;
}