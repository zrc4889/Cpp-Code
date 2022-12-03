#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 2e5 + 10;
int a[_], sum[_];
int n;

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    sum[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        ans += a[i] * (sum[n] - sum[i]);
    }

    cout << ans << endl;

    return 0;
}