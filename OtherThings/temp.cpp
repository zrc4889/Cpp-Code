#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;

vector<int> e[_];

int sum = 0;

void dfs(int u)
{
    if (e[u].empty())
        sum++;
    for (auto v : e[u])
    {
        // cout << u << "->" << v << endl;
        dfs(v);
    }
}

int main()
{
    freopen("chain.in", "r", stdin);
    freopen("chain.out", "w", stdout);

    // start here..
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int x, y;
        cin >> x >> y;
        e[x].push_back(y);
    }

    dfs(1);

    cout << sum << endl;

    return 0;
}