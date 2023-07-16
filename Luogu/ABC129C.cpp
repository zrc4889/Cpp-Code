#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e5 + 10;
const int mod = 1e9 + 7;
int f[_], bad[_];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int i;
        cin >> i;
        bad[i] = 1;
    }
    if (!bad[0])
        f[0] = 1;
    if (!bad[1])
        f[1] = 1;

    for (int i = 2; i <= n; i++)

    {
        if (!bad[i])
        {
            f[i] = f[i - 1] + f[i - 2];
            f[i] %= mod;
        }
    }
    cout << f[n] << endl;
    return 0;
}