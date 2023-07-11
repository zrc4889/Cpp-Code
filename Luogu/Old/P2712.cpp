#include <bits/stdc++.h>
using namespace std;

const int _ = 559;
int d[_];
bool used[_];
vector<int> g[_];
queue<int> q;

int main()
{

    int n, xm = -1;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int k, t;
        cin >> t >> k;

        used[t] = true;

        while (k--)
        {
            int x;
            cin >> x;
            g[t].push_back(x), d[x]++;
        }
        xm = max(xm, t);
    }

    for (int i = 1; i <= xm; ++i)
    {
        if (d[i] ==  0 && used[i])
            q.push(i);
    }

    int cnt = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cnt++;
        for (auto v : g[u])
        {
            d[v]--;
            if (d[v] == 0 && used[v])
                q.push(v);
        }
    }

    if (n == cnt)
        cout << "YES" << endl;

    else
        cout << n - cnt << endl;

    return 0;
}