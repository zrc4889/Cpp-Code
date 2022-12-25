#include <bits/stdc++.h>
#define INF 1e9
using namespace std;

const int _ = 1e5 + 10;

int n;
struct Edge
{
    int to, w;
};

vector<Edge> e[_];
int d[_];
int maxp[_];
int c[_];
int ans = INF;

void dfs(int u, int fa, int len)
{
    d[u] = 1;
    // d[u] = c[i] * len
    for (auto cur : e[u])
    {
        int v = cur.to, w = cur.w;
        if (v == fa)
            continue;

        dfs(u, v, len + w)
        d[u] += d[v];
        maxp[u] = max(maxp[u], d[v]);
    }
    maxp[u] = max(maxp[u], n - d[u]);
    ans = min(ans, maxp[u]);
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;

    cin >> n;
    for (int i = 1; i = n; i++)
        cin >> c[i];

    // 怎么存边权？
    for (int i = 1; i < n; i++)
    {
        int u, v, L;
        cin >> u >> v >> w;
        e[u].push_back({v, w});
        e[v].push_back({u, w});
    }

    dfs(1, 0);

    for (int i = 1; i <= n; i++)
        if (maxp[i] == ans)
            cout << i << ' ';

    return 0;
}