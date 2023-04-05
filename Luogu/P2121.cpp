#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;

struct Edge
{
    int u, v;
    int w;
} e[_];

int fa[_];

int find(int x)
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

bool cmp(Edge a, Edge b)
{
    return a.w > b.w;
}

int main()
{
    // start here..

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= m; ++i)
        cin >> e[i].u >> e[i].v >> e[i].w;
    for (int i = 1; i <= n; ++i)
        fa[i] = i;

    sort(e + 1, e + 1 + m, cmp);

    int sum = 0, cnt = 0;
    for (int i = 1; i <= m; ++i)
    {
        if (cnt == k)
            break;
        int ru = find(e[i].u), rv = find(e[i].v);
        if (ru == rv)
            continue;

        fa[ru] = rv;
        cnt ++;
        sum += e[i].w;
    }

    cout << sum << endl;
    return 0;
}