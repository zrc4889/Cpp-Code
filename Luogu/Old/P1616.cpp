#include <bits/stdc++.h>
using namespace std;
#define int long long
const int A = 1e7 + 5;
int v[A], w[A];
int dp[A];
signed main()
{
    int n, W;
    cin >> W >> n;
    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];
    for (int i = 1; i <= n; i++)
        for (int j = w[i]; j <= W; j++)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    // else
    // dp[i][j] = max(dp[i - 1][j], dp[i][j - v[i]] + w[i]);

    cout << dp[W];
    return 0;
}