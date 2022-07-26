#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, a, b, ans = INT_MAX;
int v[300], w[300], f[300][300][300];
int get(int x, int y) { return (v[x] - w[y]) * (v[x] - w[y]); }
signed main() {
    freopen("weapon.in", "r", stdin);
    freopen("weapon.out", "w", stdout);
    cin >> n >> a >> b;
    for (int i = 1; i <= a; i++) cin >> v[i];
    for (int i = 1; i <= b; i++) cin >> w[i];
    sort(v + 1, v + a + 1);
    sort(w + 1, w + b + 1);
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= a; j++)
            for (int k = 0; k <= b; k++) f[i][j][k] = INT_MAX;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= a; j++)
            for (int k = 1; k <= b; k++) {
                f[i][j][k] = min(
                    f[i][j][k], min(f[i][j - 1][k], min(f[i][j][k - 1], f[i - 1][j - 1][k - 1] + get(j, k))));
                if (i == n)
                    ans = min(ans, f[i][j][k]);
            }
    cout << ans;
    return 0;
}