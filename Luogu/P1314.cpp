#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m, s;
const int N = 2e5 + 10;
int w[N], v[N], l[N], r[N], s1[N], s2[N];
signed main()
{
    cin >> n >> m >> s;
    for (int i = 1; i <= n; ++i)
    {
        scanf("%lld %lld", &w[i], &v[i]);
    }
    // 二分 + 前缀和
    for (int i = 1; i <= m; ++i)
        scanf("%lld %lld", &l[i], &r[i]);
    int L = 0, R = 1e6 + 10;
    int ans = 1e18; // min最小

    while (L + 1 < R)
    {
        int mid = (L + R) / 2;
        int W = mid;
        s1[0] = 0, s2[0];
        for (int i = 1; i <= n; ++i)
        {
            if (w[i] >= W)
            {
                s1[i] = s1[i - 1] + 1;
                s2[i] = s2[i - 1] + v[i]; //价值和
            }
            else
            {
                s1[i] = s1[i - 1] + 0;
                s2[i] = s2[i - 1] + 0;
            }
        }
        int y = 0;
        for (int i = 1; i <= m; ++i)
        // 快速区间和
        {
            y += (s1[r[i]] - s1[l[i] - 1]) * (s2[r[i]] - s2[l[i] - 1]); // 有多少个shu大于1 乘以 价值
        }
        ans = min(ans, abs(y - s));
        if (y < s)
            R = mid;
        else
            L = mid; //将中值作为左边界，即右区间
    }
    cout << ans;
    return 0;
}