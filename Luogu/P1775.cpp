#include <bits/stdc++.h>
using namespace std;
const int _ = 330;
const int INF = 1e9;
int f[_][_], s[_];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    for (int i = 2; i <= n; i++)
        s[i] += s[i - 1]; // 前缀和优化
    // 枚举长度
    for (int len = 2; len <= n; len++)
    {
        // 枚举左区间
        // i + len - 1 防止区间溢出
        for (int i = 1; i + len - 1 <= n; i++)
        {
            int l = i, r = i + len - 1;
            f[l][r] = INF;
            for (int j = l; j < r; j++)
                // 枚举右端点
                f[l][r] = min(f[l][r], f[l][j] + f[j + 1][r] + (s[r] - s[l - 1]));
        }
    }   
    cout << f[1][n] << endl;
    return 0;
}