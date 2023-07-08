#include <bits/stdc++.h>
using namespace std;

const int _ = 501;

struct hp
{
    int x, y;
    double w;
} a[_ * _];

bool cmp(hp a, hp b)
{
    return a.w < b.w;
}

int fa[_];
int xx[_], yy[_];
int cnt = 0;

int find(int x)
{
    return fa[x] == x ? x : find(fa[x]);
}

int main()
{
    // start here..

    int s, p;
    cin >> s >> p;

    for (int i = 1; i <= p; ++i)
        cin >> xx[i] >> yy[i];

    for (int i = 1; i <= p; ++i)
        for (int j = 1; j <= p; ++j)
        {
            ++cnt;
            a[cnt].x = i, a[cnt].y = j;
            a[cnt].w = sqrt((xx[i] - xx[j]) * (xx[i] - xx[j]) + (yy[i] - yy[j]) * (yy[i] - yy[j]));
        }

    int n = p * p;

    for (int i = 1; i <= p; ++i)
        fa[i] = i;

    sort(a, a + n + 1, cmp);
    cnt = 0;
    double ans = -1;

    for (int i = 1; i <= n; ++i)
    {
        int fx = find(a[i].x), fy = find(a[i].y);
        if (fx == fy) continue;
        else{
            fa[fx] = fy;
            cnt ++;
            ans = max(ans, a[i].w);
        }
        if (cnt == p - s)
        {
            printf("%.2f", ans);
        }
    }

    return 0;
}