#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 10;
int a[_], b[_];
int x[_]; // 这个数组可能不要
int n, k;
int dp[_][2];
int f(int x)
{
    // abs function
    if (x < 0)
        return 0 - x;
    else
        return x;
}
int main()
{

    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    // dp[~][0] 是 a - b
    // dp[~][1] 是 b - a
    dp[1][0] = dp[1][1] = true;
    for (int i = 2; i <= n; i++) // 起始值是2，因为i-1，边界是1
    { // 与的优先级是高于或的
        dp[i][0] = dp[i - 1][0] && f(a[i] - a[i - 1]) <= k || // 为何是 i-1?
                   dp[i - 1][1] && f(a[i] - b[i - 1]) <= k;
        dp[i][1] = dp[i - 1][0] && f(b[i] - a[i - 1]) <= k ||
                   dp[i - 1][1] && f(b[i] - b[i - 1]) <= k;
    }
    if (dp[n][0] || dp[n][1])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}