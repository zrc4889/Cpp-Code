#include <bits/stdc++.h>
#define int long long
using namespace std;

int n;
const int _ = 3e6 + 10;

struct Node
{
    int to, value;
};
vector<Node> e[_];
int d[_];

// 树形 dp 求 树的直径（带负权）
int ans = 0;

void dfs(int u, int fa)
{
    // d[u]
    int m1, m2;
    m1 = m2 = 0;

    d[u] = 0;
    for (auto cur : e[u])
    {
        int v = cur.to, w = cur.value;
        if (v == fa)
            continue;
        dfs(v, u);
        // 以上模板

        // 树形 DP
        d[u] = max(d[u], d[v] + w);

        int t = d[v] + w;

        // 求次大值最大值标准模板
        // 两小一换，大换小接
        if (m1 < t)
            m2 = m1, m1 = t;
        else if (m2 < t)
            m2 = t;
    }
    ans = max(ans, m1 + m2);
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
        int u, v, w;
        cin >> u >> v >> w;
        e[u].push_back({v, w});
        e[v].push_back({u, w});
    }

    dfs(1, 0);

    cout << ans << endl;

    return 0;
}