#include <bits/stdc++.h>
#define int long long
using namespace std;

// 炸飞，不敢写

signed main()
{
    // start here..

    // ios::sync_with_stdio(), cin.tie(0), cout.tie(0);

    int a, b, x;

    scanf("%lld%lld%lld", &a, &b, &x);

    // cin >> a >> b >> x;
    // a = 1, b = 1e18, x = 2;

    if (a == b)
        return cout << 0 << endl, 0;

    int l = a, r = b;
    while (l % x && r > l)
        l++;
    while (r % x && r >= l)
        r--;

    // cout << l << ' ' << r << endl;

    int ans = (r - l) / x;

    if (l % x == 0)
        ans++;

    // cout << ans << endl;
    printf("%lld", ans);

    return 0;
}