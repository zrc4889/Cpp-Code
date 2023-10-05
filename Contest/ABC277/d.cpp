#include <bits/stdc++.h>
using namespace std;
#define int long long
const int _ = 2e5 + 10;

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    vector<int> a(n * 2);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    for (int i = 0; i < n; i++)
        a[i + n] = a[i] + m;
    sort(a.begin(), a.end());
    int l = 0, r = 0;
    int now = 0, ans = sum, cnt = 0;
    while (l < n * 2)
    {
        while (r < n * 2 && (l == r || a[r] == a[r - 1] || a[r] == a[r - 1] + 1) && cnt < n)
        {
            now += a[r] >= m ? a[r] - m : a[r];
            r++;
            cnt++;
        }
        ans = min(ans, sum - now);
        now -= a[l] >= m ? a[l] - m : a[l];
        l++, cnt--;
    }
    cout << ans << endl;

    return 0;
}