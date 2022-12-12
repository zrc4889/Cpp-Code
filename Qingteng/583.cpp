#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;
int n;
struct Edge
{
    int to, w;
};
vector<Edge> e[_];
int x, len;

void dfs(int u, int f, int sum)
{
    // 现在到了 u
    // 是从 f 来的
    // 总和为 sum

    if (sum > len)
        x = u, len = sum; // 取最大值，最远距离与最远端点

    for (int i = 0; i < e[u].size(); ++i)
    {
        int v = e[u][i].to; // 去向 v
        int w = e[u][i].w;  // 长度 w

        if (v == f)
            continue;
        // 往回走了

        dfs(v, u, sum + w);
        // 走这条边
        // 到了 v，从 u 来，总和加 w
    }
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;

        e[u].push_back((Edge){v, w});
        e[v].push_back((Edge){u, w});
    }

    int s = 1; // 起点

    dfs(s, 0, 0);

    dfs(x, 0, 0);

    cout << len << endl;

    return 0;
}

// 1 树的直径 概念
// 2 模板题，树的遍历
// 3 森林的遍历