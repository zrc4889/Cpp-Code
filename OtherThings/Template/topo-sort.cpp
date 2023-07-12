#include <bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 10;

struct Edge {
    int to, w;
};

int n, m;

vector<Edge> e[_];
vector<int> l; // line 存路径
queue<int> q;

int main()
{
    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
        ind[v] ++;
    }

    for (int i = 1; i <= n; ++i)
        if (!ind[i])
            q.push(i);

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        l.push_back(u);

        for (auto v : e[u])
        {
            ind[v] --;
            if (!ind[v])
                q.push(v);
        }
    }

    return 0;
}