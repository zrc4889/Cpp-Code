#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 2e5 + 1;

struct Point
{
    int x, y;
} a[_];
int f[_];
int d[_];

bool cmp(const Point &a, const Point &b)
{
    return a.x < b.x;
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int maxn = -1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y;
    sort(a + 1, a + 1 + n, cmp);

    // dp n方只能50分，wikioi AC

    // for (int i = 1; i <= n; i++)
    // {
    //     f[i] = 1;
    //     for (int j = 1; j < i; j++)
    //     {
    //         if (a[j].y < a[i].y) // 不相交
    //         {
    //             f[i] = max(f[i], f[j] + 1);
    //         }
    //     }
    //     maxn = max(maxn, f[i]);
    // }

    // 此题重点练习dp

    int len = 0;
    d[++len] = a[1].y;
    for (int i = 2; i <= n; i++)
    {
        int cur = upper_bound(d + 1, d + len + 1, a[i].y) - d;
        d[cur] = a[i].y;
        if (cur > len)
            len++;
    }

    // cout << len<<endl;

    cout << len << endl;
    return 0;
}