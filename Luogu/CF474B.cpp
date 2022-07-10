#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e6 + 10;
int a[N], s[N], n, m, q, x;
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }
    cin >> q;
    while (q--)
    {
        cin >> x;
        int l = 1, r = n;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (x <= s[mid])
                r = mid;
            else
                l = mid;
        }
        if (x <= s[l])
            cout << l << endl;
        else
            cout << r << endl;
    }
    return 0;
}