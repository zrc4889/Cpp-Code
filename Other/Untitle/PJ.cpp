#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int _ = 2e5 + 10;
int w[_], d[_], n, m;
// d 数组为结点的度
bool f[_];
// f 数组标记该节点是否被标记过
vector<int> g[_]; // 邻接矩阵
queue<int> q;
bool check(int x)
{
    // 1 ~ x 去 check

    for (int i = 1; i <= 10000; ++i)
        w[i] = d[i], f[i] = false; // 复制一个 d 数组到 w 数组方便操作
    for (int i = 1; i <= x; i++)
        if (w[i] == 1)
            q.push(i); // 度为 1 新起一头
    while (!q.empty())
    {
        int u;
        u = q.front(), q.pop(); // 常规取节点pop节点
        if (w[u] == 0)
            continue; // 该节点没有度
        f[u] = true;
        for (int v : g[u]) // 新语法
        {
            if (v == u)
                continue; // 是节点本身
            w[v]--;       // 断边 度减 1
            if (w[v] == 1)
                q.push(v); // 发现一个新的度为 1 的好果子节点
        }
    }
    for (int i = 1; i <= x; ++i)
        if (w[i] == 0 && !f[i])
            return false;
    return true;
}
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v), g[v].push_back(u);
        // 无向图
        // 用vector数组存邻接矩阵
        d[u]++, d[v]++; // 度都加一
    }
    int l = 0, r = 10000;
    while (l + 1 < r)
    {
        int mid = l + r >> 1;
        if (check(mid))
            l = mid;
        else
            r = mid;
    }
    if (check(r))
        cout << r;
    else
        cout << l;
}