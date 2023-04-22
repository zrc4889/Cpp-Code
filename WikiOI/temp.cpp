#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 1e5 + 10;
int a[_];
int s[_];

int sum(int l, int r)
{
    return s[r] - s[l - 1]; 
}

signed main()
{
    // start here..

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i) cin >> a[i];
    for (int i = 1; i <= n; ++i) s[i] += s[i - 1] + a[i];

    // 探究各个关系

    // 从一号点开始

    int l, r;
    l = 0, r = 0;
    // for (int i = 1; i <= n; ++i) r += a[i] * abs(1 - a[i]);

    // cout << l << endl << r << endl;

    // for (int i = 2; i <= n; ++i)
    // {
    //     l += a[i] * ()
    // }

    // r = sum(1, n);  

    for (int i = 1; i <= n; ++i)
    {
        r += a[i] * (i - 1);
    }

    // cout << l << ' ' << r << endl;

    int ans = 1e6 + 1;

    for (int i = 1; i <= n; ++i)
    {
        l += sum(1 , i - 1);
        r -= sum(i, n);
        ans = min(ans, abs(l - r));
        // cout << l << ' ' << r << endl;
    }
    cout << ans << endl;
    return 0;
}