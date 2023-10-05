#include <bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 10;

struct Edge
{
    int to, w;
};
struct Node
{
    int dis, u;
    bool operator>(const node &a) const { return dis > a.dis; } // ?
}

vector<Edge>
    e[_];
int dis[_], vis[_];
priority_queue<Node, vector<Node>, greater<Node>> q;

void dijkstra(int s)
{
    memset(dis, 0, sizeof dis);
    memset(vis, 0, sizeof vis);
    dis[s] = 0, vis[s] = 0;
    q.push({dis[s], s}); // also, {0, s}.
    while (!q.empty())
    {
        int u = q.top().u;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = 1; // ?
        for (auto ed : e[u])
        {
            int w = ed.w, v = ed.to;
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                q.push({dis[v], v});
            }
        }
    }
}