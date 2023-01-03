#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 100010;
int a[_], s[_];

signed main()
{
    // start here..
    int n;
    cin >> n;
    s[0] = 0;

    for (int i = 1; i <= n; i++)

    {
        cin >> a[i];
        s[i] = s[i - 1] + a[i];
    }

    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if (s[n] - s[i] == s[i])
            ans++;
    }

    cout << ans << endl;
    return 0;
}