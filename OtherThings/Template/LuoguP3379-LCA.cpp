#include <bits/stdc++.h>
using namespace std;

const int _ = 5e5 + 10;

vector<int> e[_];
int fa[_][22];
int d[_], lg[_];
int n, m, s;

void dfs(int now, int fath)
{
    fa[now][0] = fath, d[now] = d[fath] + 1;
    for (int i = 1; i <= lg[d[now]]; ++i)
        fa[now][i] = fa[fa[now][i - 1]][i - 1];
    for (int ed : e[now])
    {
        int u = ed;
        if (u == fath) continue;
        dfs(u, now);
    }
}
int lca(int x, int y)
{
    if (d[x] < d[y]) swap(x, y);
    while (d[x] > d[y]) x = fa[x][lg[d[x] - d[y]] - 1];
    if (x == y) return x;
    for (int k = lg[d[x]] - 1; k >= 0; --k)
        if (fa[x][k] != fa[y][k])
            x = fa[x][k], y = fa[y][k];
    return fa[x][0];
}

// void dfs(int now, int fath)
// {
//     fa[now][0] = fath, d[now] = d[fath] + 1;
//     for (int i = 1; i <= lg[d[now]]; ++i)
//         fa[now][i] = fa[fa[now][i - 1]][i - 1];
//     for (int ed : e[now])
//     {
//         int u = ed;
//         if (u == fath) continue;
//         dfs(u, now);
//     }
// }
// int lca(int x, int y)
// {
//     if (d[x] < d[y]) swap(x, y);
//     while (d[x] > d[y]) x = fa[x][lg[d[x] - d[y]] - 1];
//     if (x == y) return x;
//     for (int k = lg[d[x]] - 1; k >= 0; --k)             // 向下取整
//         if (fa[x][k] != fa[y][k])
//             x = fa[x][k], y = fa[y][k];
//     return fa[x][0];
// }

int main()
{
    cin >> n >> m >> s;
    
    for (int i = 1; i <= n - 1; ++i)
    {
        int x, y;
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }

    for (int i = 1; i <= n; ++i)
        lg[i] = lg[i - 1] + (1 << lg[i - 1] == i); 
    // lg[i] = lg[i / 2] + 1

    dfs(s, 0);

    for (int i = 1; i <= m; ++i)
    {
        int a, b;
        cin >> a >> b;
        cout << lca(a, b) << endl;
    }
} 