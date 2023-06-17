#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int to, w;
} a[100];

vector<Node> e[100];
// bool vis[100];
int dis = 0;
int x, y;

void dfs(int p)
{
    // if (vis[p])
    //     return;
    if (p == y)
    {
        cout << dis << endl;
        exit(0);
    }

    for (auto nxt : e[p])
    {
        if (nxt.to == p)
            continue;
        dis += nxt.w;
        // vis[nxt.to] = true;
        dfs(nxt.to);
    }
}

int main()
{
    // start here..

    e[1].push_back({2, 3});
    e[2].push_back({3, 1});
    e[3].push_back({4, 4});
    e[4].push_back({5, 1});
    e[5].push_back({6, 5});
    e[6].push_back({7, 9});

    e[2].push_back({1, 3});
    e[3].push_back({2, 1});
    e[4].push_back({3, 4});
    e[5].push_back({4, 1});
    e[6].push_back({5, 5});
    e[7].push_back({6, 9});

    char a, b;
    cin >> a >> b;

    x = a - 'A' + 1, y = b - 'A' + 1;

    if (x > y) swap(x, y);

    dfs(x);

    return 0;
}