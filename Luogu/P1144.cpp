#include <bits/stdc++.h>
using namespace std;

const int INF = 0x7fffffff;
const int _ = 1000010;

int n, m, x, y;
int vis[_], dis[_], ans[_];
vector<int> g[_];
queue<int> q;

void spfa(int x)
{
    for (int i = 1; i <= n; i++)
        dis[i] = INF;
    q.push(x); // 加入队列
    vis[x] = ans[x] = 1, dis[x] = 0;
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        for (int i = 0; i < g[u].size(); i++)
        {
            int v = g[u][i];
            if (dis[v] > dis[u] + 1)
            {
                dis[v] = dis[u] + 1; // 增加1长度
                ans[v] = ans[u];     // 答案转移

                if (!vis[v])
                    vis[v] = 1, q.push(v); // 无路可走
            }
            else if (dis[v] == dis[u] + 1)
                ans[v] = (ans[v] + ans[u]) % 100003;
        }
        vis[u] = 0; // 重置
    }
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
            cin >>
        n >> m;
    while (m--)
    {
        cin >> x >> y;
        g[x].push_back(y), g[y].push_back(x);
    }
    spfa(1);

    for (int i = 1; i <= n; i++)
        cout << ans[i] << endl;
    return 0;
}