#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 100;
int a[N], f[N][N], g[N][N];
void chmax(int &a, int b) {
    if (b > a)
        a = b;
}
void chmin(int &a, int b) {
    if (b < a)
        a = b;
}
void solve() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        f[i][i] = a[i];
        g[i][i] = a[i];

        f[i + n][i + n] = a[i];
        g[i + n][i + n] = a[i];
    }

    for (int len = 2; len <= n; ++len) {
        for (int i = 1; i + len - 1 <= 2 * n; ++i) {
            int j = i + len - 1;
            f[i][j] = -1e9;
            g[i][j] = 1e9;
            for (int k = i; k < j; ++k) {
                chmax(f[i][j], f[i][k] + f[k + 1][j]);
                chmin(g[i][j], g[i][k] + g[k + 1][j]);
            }

            // f[i][j]
            // [i][l], [l + 1][r - 1], [r][j]
            for (int l = i; l < j; ++l)
                for (int r = l + 1; r <= j; ++r) {
                    if (l + 1 > r - 1)
                        continue;

                    chmax(f[i][j], f[i][l] * f[r][j] - g[l + 1][r - 1]);
                    chmax(f[i][j], g[i][l] * g[r][j] - g[l + 1][r - 1]);

                    chmin(g[i][j], g[i][l] * f[r][j] - f[l + 1][r - 1]);
                    chmin(g[i][j], f[i][l] * g[r][j] - f[l + 1][r - 1]);
                    chmin(g[i][j], f[i][l] * f[r][j] - f[l + 1][r - 1]);
                    chmin(g[i][j], g[i][l] * g[r][j] - f[l + 1][r - 1]);
                }
        }
    }

    int ans = -1e18;
    for (int i = 1; i <= n; ++i) ans = max(f[i][i + n - 1], ans);
    cout << ans << endl;
}
signed main() {
    freopen("pao.in", "r", stdin);
    freopen("pao.out", "w", stdout);
    int t;
    cin >> t;
    while (t--) solve();
}
