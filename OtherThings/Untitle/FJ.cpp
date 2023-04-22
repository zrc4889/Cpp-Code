#include <bits/stdc++.h>
#define int double
using namespace std;

signed main()
{
    freopen("math.in", "r", stdin);
    freopen("math.out", "w", stdout);
    int l;
    cin >> l;
    int ans = (l / 3) * (l / 3) * (l / 3);
    printf("%.6f", ans);
    // cout << ans << endl;
    return 0;
}