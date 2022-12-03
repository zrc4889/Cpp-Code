#include <bits/stdc++.h>
using namespace std;
const int _ = 500010;
struct edge
{
    int v, w, nxt;
} e[_];
int head[_], cnt = 0;

void addEdge(int u, int v, int w)
{
    ++cnt;
    e[cnt].v = v;
    e[cnt].w = w;
    e[cnt].nxt = head[u];
    head[u] = cnt;
    // v w 对入座，nxt cnt 互 head
}

int n, m, s;
int dis[_];

struct node
{
    int u, d;
    bool operator<(const node &k) const { return d > k.d; } // 排序
};

void dijkstra()
{
    for (int i = 1; i <= n; i++)
        dis[i] = 2147483647; // 初始化
    dis[s] = 0;
    priority_queue<node> q;
    q.push({s, 0});
    while (!q.empty())
    {
        node cur = q.top();
        q.pop();
        int u = cur.u, d = cur.d;
        if (d != dis[u])
            continue;
        // d 是预想长度，dis[u] 是实际长度。只有两者相等才代表已经到达终点
        for (int i = head[u]; i; i = e[i].nxt)
        {
            // 常规遍历，记住了奥！
            int v = e[i].v, w = e[i].w;
            // 取值
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                q.push({v, dis[v]});
            }
        }
    }
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m >> s;
    for (int i = 1; i <= m; i++)
    {
        int x, y, c;
        cin >> x >> y >> c;
        addEdge(x, y, c);
    }
    dijkstra();
    for (int i = 1; i <= n; i++)
        cout << dis[i] << ' ';
    return 0;
}