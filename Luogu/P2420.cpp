#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;

struct Edge
{
    int to, w;
};

vector<Edge> e[_];
int dis[_];
int n, q;

void dfs(int fa, int u, int sum)
{
    for (auto [v, w] : e[u])
    {
        if (v == fa) continue;
        dis[v] = sum ^ w;
        dfs(u, v, sum ^ w);
    }
}

int main()
{

    cin >> n;

    for (int i = 1; i <= n - 1; ++i)
    {
        int u, v, w;
        cin >> u >> v >> w;
        e[u].push_back({v, w});
        e[v].push_back({u, w});
    }

    dfs(1, 1, 0);

    cin >> q;

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        cout << (dis[x] ^ dis[y]) << endl;
    }

    return 0;
}

// 根据异或的特殊性质，自反性
// x xor x = 0
// x xor 0 = x