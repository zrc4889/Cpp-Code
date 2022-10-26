#include <bits/stdc++.h>
using namespace std;
// TODO: 新做法2022年10月26日 
const int N = 1e5 + 10;
struct Edge
{
    int to;
    int next;
} e[N];
int n, m, ans, en = 0;
int h[N];
bool tois[N];

void add(int u, int v)
{
    en++;
    e[en].u = u, e[en].v = v;
    e[en].next = h[u];
    h[u] = en;
}
void dfs(int u, int fa)
{
    // ans = max(ans, x);
    // vis[x] = 1;
    vis[u] = fa;

    for (int i = h[u]; i; i = e[i].next)
    {
        int v = e[i].v;
        if (vis[v])
            continue;
        dfs(v, fa);
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        add(v, u); // 反向建边
    }

    for (int i = n; i >= 1; i--)
    {
        if (vis[i])
            continue;
        dfs(i, i);
    }
    for (int i = 1; i <= n; i++)
        cout << vis[i] << ' ';
        return 0;
}