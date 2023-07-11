#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e7 + 7;
int v[_], w[_];
int dp[_];
signed main()

{
    int n, W;
    cin >> W >> n;
    for (int i = 1; i <= n; ++i)
        cin >> w[i] >> v[i];
    for (int i = 1; i <= n; ++i)
        for (int j = w[i]; j <= W; ++j)
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
    cout << dp[W];
    return 0;
}