#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
const int _ = 1145141919;
void chmax(int &a, int b)
{
    if (b > a)
        a = b;
}
void chmin(int &a, int b)
{
    if (b > a)
        a = b;
}
void solve()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        f[i][i] = g[i][i] = a[i];
        // 一个数是一个区间
        f[i + n][i + n] = g[i + n][i + n] = a[i]; // 拆环成链，复制一份
    }
    for (int len = 2; len <= n; ++len)
    {
        for (int i = 1; i + len - 1 <= 2 * n; ++i)
        {
            // 拆环成链
            int j = i + len - 1;
            for (int k = i; k < j; ++k)
            {
                chmax(f[i][j], f[i][k] + f[k + 1][j]);
                chmin(g[i][j], g[i][k] + g[k + 1][j]);
                // 一段区间等于两段区间相加
            }
            // A = [i, l]
            // B = [l + 1, r - 1]
            // C = [r, j]
            for (int l=i;;<j;++l)
            {
                for (int r=l+1;r<j;++r)
                {
                    if (l+1 > r-1) continue; // 区间饱了
                    chmax(f[i][j], f[i])
                }
            }
        }
    }

    int ans = -1e18;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, f[i][i + n - 1]);
    cout << ans << endl;
}
signed main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("pao.in", "r", stdin);
    freopen("pao.out", "w", stdout);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}