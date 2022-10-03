#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 10;
int a[_];
int f[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[0] = 0;
    f[1] = a[1]; // 第一个的最大字段和就是它本身
    for (int i = 1; i <= n; i++)
        // 考虑：新的最大子段和 or 延续上一个最大子段和
        f[i] = max(f[i - 1] + a[i], a[i]); // 延续 or 新起一头
    int ans = -1e18;
    for (int i = 1; i <= n; i++)
        ans = max(ans, f[i]);
    cout << ans << endl;
    return 0;
}