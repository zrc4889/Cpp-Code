#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, w;
const int _ = 1e6 + 10;
int a[_];
inline bool cmp1(int x, int y)
{
    return x > y;
}
inline bool cmp2(int x, int y)
{
    return x < y;
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    cin >> w;
    int t = 0;
    sort(a + 1, a + 1 + n, cmp1);
    for (int i = 1; i <= n; i++)
    {
        if (t == 0)
        {
            if (w - a[i] >= 0) // 相减不会负数
            {
                w -= a[i]; // 取走
                t = a[i];
                break;
            }
        } // 否则莫得取
    }
    int ans = 0;
    if (t)
    {
        // 尽可能交换更多的
        sort(a + 1, a + 1 + n, cmp2);
        for (int i = 1; i <= n; i++)
        {
            if (t >= a[i])
            {
                t -= a[i];
                ans++;
            }
        }
    }
    cout << ans << endl;
    return 0;
}