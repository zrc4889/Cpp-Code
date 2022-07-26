#include <bits/stdc++.h>

#define Read(s) freopen(s ".in", "r", stdin);
#define Write(s) freopen(s ".out", "w", stdout);

using namespace std;

int n, m, k, a[10001], f[10001][101];

signed main() {
    Read("bright");
    Write("bright");

    scanf("%d %d %d", &n, &m, &k);
    for (int i = 1; i <= n; ++i) scanf("%d", &a[i]);

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j) f[i][j] = INT_MIN / 3;

    for (int i = 1; i <= n; ++i) {
        f[i][1] = max(f[i - 1][1], a[i]);
        if (i > k)
            for (int j = 2; j <= min(i, m); ++j)
                f[i][j] = max(max(f[i - 1][j], f[i][j]), f[i - k][j - 1] + a[i]);
    }

    printf("%d", f[n][m]);
}