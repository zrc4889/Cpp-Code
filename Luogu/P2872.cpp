#include <bits/stdc++.h>
#define db double
using namespace std;

const int _ = 1e6 + 1;

struct Point
{
    int x, y;
} p[_];

struct Edge
{
    int u, v;
    db w;
} e[_];

int fa[_];
int cnt = 0;

bool cmp(Edge a, Edge b)
{
    if (a.w == b.w)
        return a.u < b.u;
    return a.w < b.w;
}

int find(int x)
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

int main()
{
    // start here..

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        fa[i] = i;

    for (int i = 1; i <= n; ++i)
    {
        int x, y;
        cin >> x >> y;
        p[i].x = x, p[i].y = y;
    }

    for (int i = 1; i <= n; ++i)
        for (int j = i + 1; j <= n; ++j)
        {
            cnt++;
            e[cnt].u = i, e[cnt].v = j;
            e[cnt].w = (db)sqrt((db)(p[i].x - p[j].x) * (p[i].x - p[j].x) + (db)(p[i].y - p[j].y) * (p[i].y - p[j].y));
        }

    for (int i = 1; i <= m; ++i)
    {
        int u, v;
        cin >> u >> v;
        cnt++;
        e[cnt].u = u, e[cnt].v = v;
        e[cnt].w = 0.0;
    }

    db sum = 0.0;
    sort(e + 1, e + 1 + cnt, cmp);

    for (int i = 1; i <= cnt; ++i)
    {
        // if (cnt == n - 1)
            // break;

        int ru = find(e[i].u), rv = find(e[i].v);
        if (ru == rv)
            continue;

        fa[ru] = rv;
        sum += e[i].w;
        // cnt++;
    }
    printf("%.2lf\n", sum);
    return 0;
}