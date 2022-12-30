#include <bits/stdc++.h>
using namespace std;

const int _ = 5e4 + 10;
struct Edge
{
    int to, w;
};
int n;
vector<Edge> e[_];
int cnt = 0;

void dfs(int u, int fa, int k)
{
    int v, w;
    for (auto cur : e[u])
    {
        int v = cur.to, w = cur.w;
        if (v == fa)
            continue;
        if (w >= k)
        {
            cnt++;
            dfs(v, u, k);
        }
    }
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int q;
    cin >> n >> q;
    for (int i = 1; i < n; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        e[u].push_back({v, w});
        e[v].push_back({u, w});
    }

    for (int i = 1; i <= q; i++)
    {
        int k, u;
        cin >> k >> u;
        cnt = 0;
        dfs(u, -1, k);
        cout << cnt << endl;
    }
    return 0;
}