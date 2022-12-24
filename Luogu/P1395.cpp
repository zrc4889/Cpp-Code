#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 7;

vector<int> e[_];
int sz[_];
int maxp[_];
int ans = _;
int n, root = _;

void dfs(int u, int fa)
{
    // sz[u] = 1;
    for (auto v : e[u])
    {
        if (v == fa)
            continue;
        dfs(v, u);
        sz[u] += sz[v] + 1;
        maxp[u] = max(maxp[u], sz[v] + 1);
    }
    maxp[u] = max(maxp[u], n - sz[u] - 1);
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
        int x, y;
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }

    dfs(1, 0);

    for (int i = 1; i <= n; i++)
    {
        if (maxp[i] < ans)
        {
            ans = maxp[i], root = i;
        }
    }
    memset(sz, 0, sizeof sz);

    dfs(root, 0);
    int cnt = 0;
    for (int i = 1; i <= n; i++)
        cnt += sz[i];
    cout << root << ' ' << cnt << endl;
    return 0;
}