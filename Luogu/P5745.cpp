#include <bits/stdc++.h>
using namespace std;
#define int long long
const int _ = 20;
int a[_], sum[_];
int ansl, ansr, ans;
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        int l = i, r = n;
        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            if (sum[mid] - sum[i - 1] > m) // 大了
                r = mid - 1;
            // l = mid;
            else
                l = mid + 1;
            // r = mid - 1;
        }
        int result = sum[r] - sum[i - 1];
        if (result <= m && result > ans)
            ansl = i, ansr = r, ans = result;
    }
    cout << ansl << ' ' << ansr << ' ' << ans;
    return 0;
}