#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int mod = 1e9 + 7;
const int _ = 1001;
int dp[_][_];
char a[_][_];

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];

    dp[1][1] = 1;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] == '.')
                dp[i][j] += dp[i - 1][j] + dp[i][j - 1] % mod;

    cout << dp[n][m] % mod;

    return 0;
}