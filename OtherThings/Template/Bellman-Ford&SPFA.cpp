#include <bits/stdc++.h>
#define INF 0xffffff
using namespace std;

const int _ = 2e5 + 10;

struct Edge {
    int to, w;
};

vector<Edge> e[_];
int dis[_];
int vis[_], cnt[_];
int n;

bool bellman_ford(int s) // 以 s 为源点
{
    memset(dis, INF, sizeof dis);
    bool flag;
    dis[s] = 0;
    for (int i = 1; i <= n; ++i)
    {
        flag = false;
        for (int u = 1; u <= n; ++u)
        {
            if (dis[u] == INF) continue;
            for (auto ed : e[u])
            {
                int v = ed.to, w = ed.w;
                if (dis[v] > dis[u] + w)
                {
                    dis[v] = dis[u] + w;
                    flag = true;
                } 
            }
            
        }
        if (!flag) break;
    }
    return flag;
}

bool SPFA(int s)
{
    queue<int> q;
    memset(vis, 0, sizeof vis);
    memset(cnt, 0, sizeof cnt);
    memset(dis, 0, sizeof dis);
    
    dis[s] = 0, vis[s] = 1; // visable?
    q.push(s);
    
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        vis[u] = 0; // ?
    
        for (auto ed : e[u])
        {
            int v = ed.to, w = ed.w;
            if (dis[v] < dis[u] + w)
            {
                dis[v] = dis[u] + w;
                cnt[v] = cnt[u] + 1;

                if (cnt[v] >= n) return false;
                
                if (!vis[v])
                    q.push(v), vis[v] = 1;
            }
        }
    }
    return true;
}