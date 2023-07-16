#include <bits/stdc++.h>
using namespace std;

const int _ = 50;
int dp[_][_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    memset(dp, 0, sizeof dp);
    dp[1][1] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (i % 2 == 0 && j % 2 == 0)
                dp[i][j] = 0;
            else
                dp[i][j] = max(dp[i][j], dp[i][j - 1] + dp[i - 1][j]);
        }
    cout << dp[n][m] << endl;
    return 0;
}