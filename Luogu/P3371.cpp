#include <bits/stdc++.h>
#define int long long
#define INF 2147483647
using namespace std;
// SPFA，即通过队列优化的 Bellman-Ford 算法
const int _ = 5e5 + 10;
int n, m;
int s, num_edge = 0;
int dis[_], vis[_], head[_];
struct Edge
{
    int next, to, dis;
} edge[_];
void addedge(int from, int to, int dis)
{
    // 连边
    edge[++num_edge].next = head[from];
    edge[num_edge].to = to;
    edge[num_edge].dis = dis;
    head[from] = num_edge;
}
void SPFA()
{
    queue<int> q;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
        vis[i] = 0;
    }
    q.push(s);
    dis[s] = 0, vis[s] = 1;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        vis[u] = 0;
        for (int i = head[u]; i; i = edge[i].next)
        {
            // 邻接表奇怪的遍历
            int v = edge[i].to;
            if (dis[v] > dis[u] + edge[i].dis) // 有最短路
            {
                dis[v] = dis[u] + edge[i].dis;
                if (vis[v] == 0)
                {
                    vis[v] = 1;
                    q.push(v);
                }
            }
        }
    }
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++)
    {
        int f, g, w;
        cin >> f >> g >> w;
        addedge(f, g, w);
    }
    SPFA();
    for (int i = 1; i <= n; i++)
        if (s == i)
            cout << 0 << " ";
        else
            cout << dis[i] << " ";
    return 0;
    return 0;
}