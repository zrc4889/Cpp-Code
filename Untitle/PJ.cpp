#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e4 + 10;
int a[_], b[_];
int f[_];
int n, h;
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        freopen("kill.in", "r", stdin);
        freopen("kill.out", "w", stdout);
        // a 血量
        // b 体力
        memset(f, 63, sizeof f);
    cin >>
        h >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    f[0] = 0;
    // f[i] 表示 白骨精血量为 i 的最小体力值
    // 方案1
    for (int i = 1; i <= n; i++)
        for (int j = 0; j <= h; ++j)
            f[min(h, j + a[i])] = min(f[min(j + a[i], h)], f[j] + b[i]);
    cout << f[h] << endl;

    // f[i] 血量剩余 i 用的 体力
    // 方案2
    // f[h] = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = h; j >= 0; --j)
    //     {
    //         f[max(0, j - a[i])] = min(f[max(0, j - a[i])], f[j] + b[i]);
    //     }
    // }
    // cout << f[0] << endl;
    return 0;
}