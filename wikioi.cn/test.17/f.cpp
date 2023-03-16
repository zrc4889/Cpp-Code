#include <bits/stdc++.h>
using namespace std;

// 我喜欢 STL！！！

const int _ = 114514;
int n, m, Q;

int col[_] = {0};
vector<int> e[_];
int v, d, c;

void dfs(int u, int sum, int c)
{
    // cout << u << ' ' << sum << ' ' << c << endl;
    if (sum > d)
        return;
    col[u] = c;
    for (auto cur : e[u])
    {
        // col[cur] = c;
        dfs(cur, sum + 1, c);
    }
}

int main()
{
    // start here..
    cin >> n >> m;

    for (int i = 1; i <= m; i++)
    {
        int u, v;
        cin >> u >> v;
        e[u].push_back(v);
        e[v].push_back(u);
    }

    cin >> Q;

    while (Q--)
    {
        cin >> v >> d >> c;

        dfs(v, 0, c);
    }

    for (int i = 1; i <= n; i++)
    {
        cout << col[i] << endl;
    }

    return 0;
}