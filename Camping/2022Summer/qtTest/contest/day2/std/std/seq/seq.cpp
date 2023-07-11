#include <bits/stdc++.h>
using namespace std;
const int Max = 1e5 + 100, M = 1010;
int fa[Max], n, m, a[M];
int f[M][M];
int find(int x) { return x == fa[x] ? x : fa[x] = find(fa[x]); }
int dfs(int l, int r) {
    if (f[l][r] != -1)
        return f[l][r];
    if (l > r)
        return f[l][r] = 0;
    if (l == r)
        return f[l][r] = 1;
    int ans = 0;
    if (a[l] == a[r])
        return dfs(l + 1, r - 1) + 2;
    ans = max(ans, dfs(l, r - 1));
    ans = max(ans, dfs(l + 1, r));
    return f[l][r] = ans;
}
int main() {
    freopen("seq.in", "r", stdin);
    freopen("seq.out", "w", stdout);
    int k;
    scanf("%d%d%d", &n, &k, &m);
    for (int i = 0; i <= m; ++i)
        for (int j = 0; j <= m; ++j) f[i][j] = -1;
    for (int i = 1; i <= n; ++i) fa[i] = i;
    for (int i = 1; i <= k; ++i) {
        int x, y;
        scanf("%d%d", &x, &y);
        fa[find(x)] = find(y);
    }
    for (int i = 1; i <= m; ++i) scanf("%d", &a[i]);
    for (int i = 1; i <= m; ++i) a[i] = find(a[i]);
    printf("%d\n", dfs(1, m));
    return 0;
}