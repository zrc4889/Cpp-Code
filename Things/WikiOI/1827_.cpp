#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 1e5 + 10;
int n;

struct Edge
{
    int to, w;
};
vector<Edge> e[_];
int c[_];
int d[_];
int total;
int sum = 0;
int ans = 1e18;

void dfs(int u, int fa, int len)
{
    total += c[u] * len;
    d[u] = c[u]; // d[u] 现在是多少头奶牛
    for (auto cur : e[u])
    {
        int v = cur.to, w = cur.w;
        if (v == fa)
            continue;
        dfs(v, u, len + w);

        d[u] += d[v]; // 汇聚到一起有多少头奶牛
    }
}

void dfs1(int u, int fa, int total)
{
    ans = min(ans, total);

    for (auto cur : e[u])
    {
        int v = cur.to, w = cur.w;
        if (v == fa)
            continue;

        dfs1(v, u, total - w * d[v] + w * (sum - d[v]));
    }
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> c[i];
        sum += c[i]; // 总共sum头奶牛
    }

    for (int i = 1; i < n; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        e[u].push_back({v, w});
        e[v].push_back({u, w});
    }

    total = 0;

    dfs(1, -1, 0);
    dfs1(1, -1, total);

    cout << ans << endl;
    return 0;
}