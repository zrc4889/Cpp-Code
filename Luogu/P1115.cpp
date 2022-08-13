#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int _ = 2e5 + 10;
int f[_], a[_];
int n;
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    int ans = -1e6;
    f[1] = a[1];
    for (int i = 1; i <= n; i++)
    {
        // 每次只有两种情况
        // 1、与前面的最大字段和相连
        // 2、最为最新的最大字段和的开头
        // 两者取最大即可
        f[i] = max(f[i - 1] + a[i], a[i]);
        ans = max(f[i], ans);
    }
    cout << ans << endl;
    return 0;
}