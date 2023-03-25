#include <bits/stdc++.h>
using namespace std;
const int _ = 200000;

struct Edge
{
    int u, v, w;
} e[_];
int f[_];

int n, m;

bool cmp(Edge a, Edge b)
{
    return a.w < b.w;
}

int find(int x)
{
    return f[x] == x ? x : f[x] = find(f[x]);
}

signed main()
{
    cin >> n;
    m = 0;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            int x;
            cin >> x;
            if (i == j)
                continue;
            m++, e[m].u = i, e[m].v = j, e[m].w = x;
        }

    sort(e + 1, e + m + 1, cmp);

    for (int i = 1; i <= n; ++i)
        f[i] = i;

    int cnt = 0;

    for (int i = 1; i <= m; ++i)
    {
        int ru = find(e[i].u), rv = find(e[i].v);
        if (ru == rv)
            continue;
        f[ru] = rv;
        cnt += e[i].w;
    }
    cout << cnt << endl;

    return 0;
}