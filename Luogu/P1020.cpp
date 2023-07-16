#include <bits/stdc++.h>
using namespace std;
const int INF = 2147482647;
const int _ = 1e5 + 10;
int n, t;
int h[_], f[_];
// 记 f[i] 表示「对于所有长度为 i 的单调不升子序列，它的最后一项的大小」的最大值。
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    while (~scanf("%d", &h[++n]))
        ;
    --n;
    t = 0;
    memset(f, 0, sizeof(f)), f[0] = INF;
    for (int i = 1; i <= n; i++)
    {
        int l = 0, r = t + 1;
        while (r - l > 1)
        {
            int m = l + (r - l) / 2;
            if (f[m] >= h[i])
                l = m;
            else
                r = m;
        }
        int x = l + 1;
        if (x > t)
            t = x; // 取最大值上
        f[x] = h[i];
    }
    cout << t << endl;
    t = 0;
    memset(f, 0, sizeof(f)), f[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        int l = 0, r = t + 1;
        while (r - l > 1)
        {
            int m = l + (r - l) / 2;
            if (f[m] < h[i])
                l = m;
            else
                r = m;
        }
        int x = l + 1;
        if (x > t)
            t = x;
        f[x] = h[i];
    }
    cout << t << endl;  
    return 0;
}