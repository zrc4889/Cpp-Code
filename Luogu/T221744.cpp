#include <bits/stdc++.h>
#define int long long
using namespace std;
int ans = 0;
int a[1000000], b[1000000], sa[1000000], sb[1000000];
int n;
const int mod = 1e9 + 7;
int S(int l, int r)
{
    int s1 = 0, s2 = 0;
    for (int i = l; i <= r; ++i)
    {
        s1 = (sa[r] - sa[l - 1]) % mod;
        s2 = (sb[r] - sb[l - 1]) % mod;
    }
    return s1 * s2 % mod;
}
signed main()
{

    cin >> n;
    for (int i = 1; i <= n; ++i)
        scanf("%lld", &a[i]), sa[i] = (sa[i - 1] + a[i]) % mod;
    for (int i = 1; i <= n; ++i)
        scanf("%lld", &b[i]), sb[i] = (sb[i - 1] + b[i]) % mod;
    for (int l = 1; l <= n; ++l)
        for (int r = l; r <= n; ++r)
            ans = (ans + S(l, r)) % mod;
    cout << ans;
    return 0;
}