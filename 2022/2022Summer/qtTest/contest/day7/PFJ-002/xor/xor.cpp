#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e5 + 10;
int n, x, s[_];
signed main()
{
    freopen("xor.in", "r", stdin);
    freopen("xor.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x;
        s[i] = s[i - 1] ^ x;
    }
    int T;
    cin >> T;
    int l, r;
    while (T--)
    {
        cin >> l >> r;
        printf("%lld\n", s[r % (n + 1)] ^ s[(l - 1) % (n + 1)]);
    }
    return 0;
}