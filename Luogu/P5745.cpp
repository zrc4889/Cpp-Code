#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int _ = 4e6 + 10;
int a[_], sum[_];
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
    } // 前缀和
    int ansl, ansr, ans = -1;
    for (int i = 1; i <= n; i++)
    {
        int l = i, r = n;
        while (l <= r)
        {
            int mid = (l + r) / 2;
            if (sum[mid] - sum[i - 1] > m)
                r = mid - 1;
            else
                l = mid + 1;
        }
        if (sum[r] - sum[i - 1] > ans && sum[r] - sum[i - 1] <= m)
        {
            ansl = i, ansr = r, ans = sum[r] - sum[i - 1];
        }
    }
    cout << ansl << ' ' << ansr << ' ' << ans << endl;
    return 0;
}