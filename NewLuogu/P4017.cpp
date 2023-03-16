#include <bits/stdc++.h>
#define p 80112002
using namespace std;

const int _ = 5e5 + 10;
int ind[_], oud[_];
int num[_]; // dp 数组
vector<int> g[_];
queue<int> q;

int main()
{
    // start here..

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        ind[b]++, oud[a]++;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (ind[i] == 0)
            num[i] = 1, q.push(i);
    }

    int cnt = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cnt++;
        for (auto v : g[u])
        {
            ind[v]--;
            if (ind[v] == 0)
                q.push(v);
            num[v] = (num[u] + num[v]) % p;
            // 状态转移方程
        }
    }

    int ans = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (oud[i] == 0)
            ans = (ans + num[i]) % p;
    }

    cout << ans << endl;

    return 0;
}