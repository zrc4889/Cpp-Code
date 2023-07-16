#include <bits/stdc++.h>
using namespace std;
const int _ = 200 + 10;
int n, m, q;
int t[_], f[_][_];
// 第一道自己做的绿题！
void init()
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            f[i][j] = 1e9;
    for (int i = 0; i < n; i++)
        f[i][i] = 0;
    return;
}
void update(int k)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (f[i][j] > f[i][k] + f[k][j])
                f[i][j] = f[i][k] + f[k][j];
    // 取最短路 Floyd
    return;
}
void addEdge(int u, int v, int w)
{
    f[u][v] = f[v][u] = w;
    return;
}
int main()
{
    #ifdef LOCAL
        LOCALfo
    #endif
    cin >> n >> m;
    init();
    for (int i = 0; i < n; i++)
        cin >> t[i];
    // 村庄修复的时间
    for (int i = 0; i < m; i++)
    {
        // 连边
        int x, y, w;
        cin >> x >> y >> w;
        addEdge(x, y, w);
    }
    cin >> q;
    int cur = 0;
    for (int i = 1; i <= q; i++)
    {
        int u, v, g;
        cin >> u >> v >> g;
        while (t[cur] <= g && cur < n)
        {
            update(cur);
            cur++;
        }
        if (t[u] > g || t[v] > g)
            cout << -1 << endl;
        // 村庄还没有被建好
        else if (f[u][v] == 1e9)
            cout << -1 << endl; // 点不连通
        else
            cout << f[u][v] << endl; // 路径长
    }
    return 0;
}