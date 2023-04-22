#include <bits/stdc++.h>
using namespace std;
const int _ = 1e6 + 10;
struct NODE
{
    int u, v, next;
} e[_];
int h[_];
bool vis[_];
int ans, n, m, en = 0;
void add(int u, int v)
{
    en++;
    e[en].u = u, e[en].v = v;
    e[en].next = h[u];
    h[u] = en;
}
void dfs(int x)
{
    ans = max(ans, x);
    vis[x] = true;

    for (int i = h[x]; i; i = e[i].next)
    {
        if (vis[e[i].v])
            continue;
        dfs(e[i].v);
    }
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        add(u, v);
    }
    return 0;
}