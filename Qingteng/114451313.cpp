#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 3e5 + 10;
int n, ans = 1e9;

struct Node
{
    int to, value;
};
vector<Node> e[_];
int sz[_], maxp[_];
// sz 向下子树权值和
// maxp 所有最大的子树权值和

void dfs(int u, int fa)
{
    sz[u] = 1;

    for (auto p : e[u])
    {
        int v = p.to, w = p.value;
        if (v == fa)
            continue;

        dfs(v, u);
        maxp[u] = max(maxp[u], sz[v]);
        sz[u] += sz[v];
    }
    maxp[u] = max(maxp[u], n - sz[u]);

    ans = min(ans, maxp[u]);
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;

    for (int i = 1; i < n; i++)
    {
        int u, v;
        cin >> u >> v;

        e[u].push_back({v, 1});
        e[v].push_back({u, 1});
    }

    dfs(1, 0);

    for (int i = 1; i <= n; i++)
        if (maxp[i] == ans)
            cout << i << " ";
    return 0;
}