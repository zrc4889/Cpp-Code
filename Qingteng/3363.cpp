#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;
int n;

struct Edge
{
    int to, w;
    // 记录一条边
    // to 将去哪里
    // w 此边权值
};

vector<Edge> e[_];
int x, len;
// 记录最终答案

void tree(int u, int from, int sum)
{
    // 实质是 dfs 边
    // 从 from 来，将去 u，此时最大值 sum

    if (sum > len)
        x = u, len = sum;

    // 更新最大值

    for (auto i : e[u])
    {
        // 遍历 u 所到的边

        int v = i.to; // 去到的点
        int w = i.w;  // 此边的价值

        if (v == from)
            continue; // 去到的是来到的点

        tree(v, u, sum + w); // 起点改变为 v，从当前点 u 来，总和加上
    }

    return;
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int m;
    cin >> n >> m;
    while (m--)
    {
        int u, v, w;
        char s;
        cin >> u >> v >> w >> s;

        e[u].push_back({v, w});
        e[v].push_back({u, w});
    }

    tree(1, 0, 0);
    tree(x, 0, 0);

    // 双向 dfs

    cout << len << endl;
    return 0;
}