#include <bits/stdc++.h>
using namespace std;
// TODO:并查集2022年10月26日 
const int _ = 100000 + 10;
int fa[_], n, m;
struct NODE
{
    int x, y, t;
} a[_];
bool cmp(NODE x, NODE y)
{
    return x.t < y.t;
}
int __find(int x)
{
    if (fa[x] == x)
        return x;
    else
        return fa[x] = __find(fa[x]);
}
void __union(int x, int y)
{
    int fx = __find(x);
    int fy = __find(y);
    fa[fx] = fy;
    return;
}
bool check()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        if (fa[i] == i)
            sum++;
    return sum == 1;
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].t;
    }
    sort(a + 1, a + 1 + m, cmp);
    for (int i = 1; i <= m; i++)
    {
        __union(a[i].x, a[i].y);
        if (check())
        {
            return cout << a[i].t << endl, 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
