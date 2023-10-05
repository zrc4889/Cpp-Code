#include <bits/stdc++.h>
using namespace std;

const int _ = 1e6 + 10;

int n, m;
vector<int> ans[_];
int flag[_];

vector<int> e[_];
int scc[_], siz[_], cnt;
int dfn[_], low[_], tot;
int stk[_], instk[_], top;

/*
维护强连通分量信息部分
1. scc[i] 点 i 所在强连通分量编号
2. siz[i] 编号为 i 的强连通分量的大小
3. cnt 强连通分量总数

维护 DFS 序树部分
1. dfn[i] 第 i 个点 dfs 序
2. low[i] 该块中最小的 dfs 序。个人理解：像染色一样，染成一样的颜色是一块。
3. tot 时间戳，即 dfs 序编号

维护 DFS 栈部分
1. stk[] 栈主体
2. instk[i] 元素是否在栈中
3. top 栈顶指针 
*/

void tarjan(int u)
{
    dfn[u] = low[u] = ++tot;
    stk[++top] = u, instk[u] = 1;                                   // 记录基本信息

    for (auto v : e[u])
    {
        if (!dfn[v]) tarjan(v), low[u] = min(low[u], low[v]);       // 考虑走树边的情况。未被 dfs 访问到
        else if (instk[v]) low[u] = min(low[u], dfn[v]);            // 考虑回环的情况（非树边）。访问到过，而且第二次访问。
    }

    if (dfn[u] == low[u])
    {
        int v = -1;
        ++cnt;
        while (u != v)
        {
            v = stk[top--], instk[v] = 0;                           // 栈操作
            ans[cnt].push_back(v);                                  // 记录答案
            scc[v] = cnt, siz[cnt] ++;                              // 连通分量信息。注意 cnt 而不是 u
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
    }

    for (int i = 1; i <= n; ++i)
        if (!dfn[i])
            tarjan(i); // 图有可能不完整

    cout << cnt << '\n';

    // 浅浅注意一下输出方式
    for (int i = 1, cur; i <= n; ++i)
    {
        cur = scc[i];
        if (flag[cur]) continue;
        flag[cur] = 1;

        sort(ans[cur].begin(), ans[cur].end());
        for (auto ed : ans[cur])
            cout << ed << ' ';
        cout << '\n';
    }

    return 0;
}
