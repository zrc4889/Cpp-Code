#include <bits/stdc++.h>
using namespace std;

const int _ = 1001;
int n, m;
bool vis[_], edge[_][_];
queue<int> t[2];
vector<int> q, g[_];
// int n, m, k, x;
int ind[_];

int main()
{
    // start here..

    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int k;
        cin >> k;

        memset(vis, 0, sizeof vis);
        q.clear();

        for (int j = 0; j < k; ++j)
        {
            int x;
            cin >> x;

            vis[x] = true;
            q.push_back(x);
        }

        int s = q[0];
        int t = q[q.size() - 1];

        for (int p = s; p <= t; ++p)
            if (!vis[p])
            {
                // 没有被停靠，比所有的都低。
                // 图论建模
                for (auto y : q)
                {
                    if (edge[p][y]) continue;
                    g[p].push_back(y);
                    // 剪枝：两两关系最多一百万不可能爆。
                    // 重边情况的剪枝
                    edge[p][y] = 1;
                    ind[y]++; // 入度
                }
            }
    }

    for (int i = 1; i <= n; ++i)
        if (ind[i] == 0)
            t[0].push(i);

    int level = 0;
    int ans = 0;

    while (!t[level].empty())
    {
        ans++;
        while (!t[level].empty())
        {
            int u = t[level].front();
            t[level].pop();
            for (int v : g[u])
            {
                ind[v] --;
                if (ind[v] == 0)
                    t[1 - level].push(v);
            }
        }
    
        level = 1 - level;
    }

    cout << ans << endl;

    return 0;
}