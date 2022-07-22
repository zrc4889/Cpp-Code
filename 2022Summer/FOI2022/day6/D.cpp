#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 998244353;
const int x = 3e2 + 10;
int n, k, ans;
const int _ = 1e5 + 5;
int a[_];
int dp[x];
signed main()
{
    freopen("math.in", "r", stdin);
    freopen("math.out", "w", stdout);
    cin >> n >> k;
    dp[0] = 1; // 滚动数组一维
    // 初始化
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        for (int j = 1; j <= k; j++)
            dp[j] = (dp[j] + a[i] * dp[j - 1]) % mod;
            // dp[i][j] = (dp[i-1][j] + a[i]^1 * dp[i-1][j-1] + a[i]^2 * dp[i-1][j-2] + ...) % mod;
    }
    // 复杂度 O(Nk);
    cout << dp[k] % mod;
    return 0;
}