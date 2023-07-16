#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, minx;
int x, ans = -1e10; // 负无穷大
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> minx;
    // 让第一个值为最小值
    for (int i = 2; i <= n; i++)
    {
        cin >> x;
        ans = max(ans, x - minx);
        minx = min(minx, x);
        // if (ans < x - minx)
        //     ans = x - minx;
        // if (x < minx)
        //     minx = x;
    }
    cout << ans << endl;
    return 0;
}