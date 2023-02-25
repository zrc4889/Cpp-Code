#include <bits/stdc++.h>
using namespace std;

const int _ = 1e6 + 10;
vector<int> g[_];
int d[_];
int n, m;
queue<int> q;
int a[_];
int tmp = 1;
// tmp++

int main()
{
    // start here..

    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int s, b;
        int l;
        cin >> s;
        cin >> l;
        for (int i = 1; i <= l; ++i)
        {
            int t;
            cin >> t;
            g[s].push_back(t);
            d[t]++;
        }
        a[tmp++] = s;
    }

    for (int i = 1; i <= tmp; i++)
    {
        int u = a[i];
        if (d[u] == 0)
            q.push(u);
    }

    // for (int i = 1; i/ <= n; ++i)
    // {
    // if (d[i] == 0)
    // q.push(i);
    // }

    int cnt = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cnt++;
        for (int v : g[u])
        {
            d[v]--;
            if (d[v] == 0)
                q.push(v);
        }
    }

    if (n == cnt)
        cout << "YES" << endl;
    else
        cout << n - cnt << endl;

    return 0;
}