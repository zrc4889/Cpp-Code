#include <bits/stdc++.h>
using namespace std;

const int _ = 5e4 + 1;

int n, m, k;
int ma[_], vis[_];

vector<int> e[_]; // 图

bool dfs(int u, int tag)
{
    // u 当前走到的点
    // tag 是否备选中过

    // 判断是否走过
    // todo
    if (vis[u] == tag)
        return 0;
    vis[u] = tag;

    for (auto v : e[u])
        // 如果这个点没有匹配点
        // 或者其下面还有匹配点
        if (ma[v] == 0 || dfs(ma[v], tag)) // todo
        {
            // 选中这个点作为匹配顶
            ma[v] = u;
            // 选中了，返回 1
            return 1;
        }
    return 0;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m >> k;
    int u, v;
    while (cin >> u >> v)
    {
        cin >> u >> v;
        e[u].push_back(v); // 有向图
    }

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (dfs(i, i))
            ans++;
    }
    return cout << ans << endl, 0;
}
