#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 10;
int a[N], g[N], f[N], n, ans = -1e18;
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        f[i] = max(f[i - 1] + a[i], a[i]);
    for (int i = 2; i <= n; ++i)
        f[i] = max(f[i - 1], f[i]); // 前缀最大值
    for (int i = n; i >= 1; --i)
        g[i] = max(g[i + 1] + a[i], a[i]); // 后缀最大值
    for (int i = n - 1; i >= 1; --i)
        g[i] = max(g[i + 1], g[i]);
    for (int i = 2; i < n; ++i)
        ans = max(ans, f[i - 1] + g[i + 1]);
    cout << ans << endl;
    return 0; 
}