#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 2e4 + 10;
int n;
int a[_], b[_];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    // int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        // 不能取到 n
        ans += b[i] - a[i];
        if (i + 1 < n)
            if (b[i] > a[i + 1])
                // 与前面线段有重复
                ans -= b[i] - a[i + 1];
    }
    cout << ans << endl;

    return 0;
}