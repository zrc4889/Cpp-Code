#include <cstdio>
#include <iostream>
#define N 500010
#define int long long
using namespace std;
const int mod = 1e9 + 7;
int n;
int a[N], b[N], sa[N], sb[N], pre[N], prea[N], preb[N];

signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        scanf("%lld", &a[i]), sa[i] = (sa[i - 1] + a[i]) % mod;
    for (int i = 1; i <= n; i++)
        scanf("%lld", &b[i]), sb[i] = (sb[i - 1] + b[i]) % mod;
    for (int i = 1; i <= n; i++)
    {
        prea[i] = (prea[i - 1] + sa[i]) % mod;
        preb[i] = (preb[i - 1] + sb[i]) % mod;
        pre[i] = (sa[i] * sb[i] % mod + pre[i - 1]) % mod;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        int sf = (pre[n] - pre[i - 1] + mod) % mod;
        int sy = ((preb[n] - preb[i - 1] + mod) % mod * sa[i - 1]) % mod;
        int sq = ((prea[n] - prea[i - 1] + mod) % mod * sb[i - 1]) % mod;
        int sp = ((n - i + 1) * ((sa[i - 1] * sb[i - 1]) % mod)) % mod;
        ans = (ans + sf - sy - sq + sp + mod) % mod;
    }
    cout << ans;
}