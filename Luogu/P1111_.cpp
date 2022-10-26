#include <bits/stdc++.h>
using namespace std;
const int _ = 100000 + 10;
int fa[_];
int n, m;
struct NODE
{
    int x, y, t;
    // 存边
} a[_];
bool cmp(NODE a, NODE b)
{
    return a.t < b.t;
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
bool judge()
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        if (fa[i] == i)
            sum++;
    return sum == 1;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        fa[i] = i;
    }
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i].x >> a[i].y >> a[i].t;
    }
    sort(a + 1, a + 1 + m, cmp);
    for (int i = 1; i <= m; i++)
    {
        __union(a[i].x, a[i].y);
        if (judge())
        {
            return cout << a[i].t << endl, 0;
        }
    }
    cout << -1 << endl;
    return 0;
}