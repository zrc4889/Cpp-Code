#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;

double sum;

struct Point
{
    int x, y;
} p[_];

struct Edge
{
    int u, v;
    double w;
} e[_];

int main()
{
    // start here..
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i].x >> p[i].y;
    }

    int ecnt = 0;
    for (int i = 1; i <= m; ++i)
    {
        int tx, ty;
        cin >> tx >> ty;
        e[++ecnt] = abs(p[tx].x - p[ty].x) 
    }

    return 0;
}