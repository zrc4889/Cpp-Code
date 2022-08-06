#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e4 + 10;
int n;
int L, R;
int c, d;
int a[_], dp[_];
signed main()
{
    freopen("sort.in", "r", stdin);
    freopen("sort.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]);
    cin >> L >> R;

    a[0] = -1e18, a[n + 1] = 1e18;
    for (int i = 1; i <= n + 1; ++i)
    {
        dp[i] = 1e18;
        c = 0, d = 0;
        for (int j = i - 1; j >= 0; --j)
        {
            if (a[j] < a[i])
            {
                dp[i] = min(dp[i], dp[j] + L * c + R * d);
                c++;
            }
            else
                d++;
        }
    }
    cout << dp[n + 1];
    return 0;
}