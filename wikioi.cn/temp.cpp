#include <bits/stdc++.h>
using namespace std;

const int _ = 1e6 + 10;
vector<int> g[_];
int d[_];
int n, m;
queue<int> q;

int main()
{
    // start here..

    cin >> n >> m;

    for (int i = 1; i <= m; ++i)
    {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        d[b]++;
    }

    for (int i = 1; i <= n; ++i)
    {
        if (d[i] == 0)
            q.push(i);
    }

    int cnt = 0;

    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        cnt++; // 要求统计未按下的，此时仅需 n - cnt
        for (int v : g[u])
        {
            d[v]--;
            if (d[v] == 0)
                q.push(v);
        }
    }
    
    if (n == cnt)
        cout << "o (∩_∩) o";
    else
        cout << "T_T" << endl << n - cnt;
    
    cout << endl;
    
    return 0;
}