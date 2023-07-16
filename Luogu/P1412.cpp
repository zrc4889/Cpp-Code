#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;
int n;
double c, k, w;
double dp[_], op[_], a[_];

int main()
{
    // start here..

    cin >> n >> k >> c >> w;

    for (int i = 1; i <= n; i++)
        cin >> op[i] >> a[i];

    // dp[i] 表示经过第 i  个星球时，所获得的最大收入

    for (int i = n; i >= 1; i--)
    {3
        if (op[i] == 1)
            dp[i] = max(dp[i + 1], dp[i + 1] * (1 - 0.01 * k) + a[i]);
        else
            dp[i] = max(dp[i + 1], dp[i + 1] * (1 + 0.01 * c) - a[i]);
    }

    // cout << dp[1] * w << endl;
    printf("%.2lf", dp[1] * w);
    return 0;
}