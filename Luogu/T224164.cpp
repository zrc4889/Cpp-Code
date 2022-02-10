#include <bits/stdc++.h>
using namespace std;
int a[50][50], b[50][50];
// 私はアホです
// Je suis un idiot
// Tôi là một thằng ngốc
int main()
{
    int k, n, ans = 0;
    cin >> k >> n;
    for (int i = 1; i <= k; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j], b[i][a[i][j]] = j; // 计算排名，类似桶思想吧。
    // for (int sb=1;i<=n;i++)
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            int sb = 0;
            for (int L = 1; L <= n; L++)
                if (b[L][i] > b[L][j])
                    sb++;
            if (sb == k)
                ans++;
        }
    cout << ans << endl;
    return 0;
}