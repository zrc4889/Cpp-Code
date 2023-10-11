#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 114514;
int a[_], dp[_];

signed main()
{
    // start here..

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    dp[0] = 0;
    int ans = -1;

    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (a[j] < a[i])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        // ans = max(ans, dp[i]);
    }

    int res = 0;
    for (int i = 2; i <= n; i++)
    {
        if (dp[i - 1] > dp[i])
        {
            // cout << a[i] << '<' << a[i - 1] << endl;
            res++;
        }
    }
    cout << res << endl;

    // for (int i = 1; i <= n; i++)
    //     cout << dp[i] << ' ';

    // cout << endl;

    // cout << ans << endl;

    return 0;
}