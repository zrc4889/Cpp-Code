#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;
int n;
struct Edge
{
    int to, w;
    // to 去那个店
    // w 该边的价值
};
vector<Edge> e[_];
int x, len;
// 结果点，结果长度

void dfs(int u, int fa, int sum)
{
    // 从 fa 来，到 u 此点去，目前总和为 sum

    if (sum > len)
        x = u, len = sum;

    // 更新最大值

    for (auto i : e[u])
    {
        int v = i.to;   // 去 v 点
        int w = i.w;    // 价值为 w

        if (v == fa)    // 目标点是所走来的点，重复了
            continue;    

        dfs(v, u, sum + w);
                        // 再启程！从 u 出发到 v，sum 行囊背上！
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

        e[u].push_back({v, w});
        e[v].push_back({u, w});
    }

    // 两次 dfs

    dfs(1, 0, 0);

    dfs(x, 0, 0);

    cout << len << endl;

    return 0;
}