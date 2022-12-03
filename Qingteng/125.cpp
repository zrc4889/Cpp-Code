#include <bits/stdc++.h>
#define int long long
using namespace std;
int T, n, w[201], v[201];
int mem[1001][101];

int dfs(int T, int x)
{
    if (x > n)
        return 0; // 大了，不能选

    if (mem[T][x])
        return mem[T][x];

    int ans = dfs(T, x + 1);

    if (T >= w[x])
        ans = max(ans, dfs(T + w[x], x + 1) + v[x]);

    return mem[T][x] = ans;
}

signed main()
{
    cin >> T >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> w[i] >> v[i];
    }
    cout << dfs(T, 1);
    return 0;
}