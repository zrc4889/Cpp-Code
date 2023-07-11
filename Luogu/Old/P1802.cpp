#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 1e6 + 10;
int win[_], lose[_];
int n, x;
int use[_];
int f[_];

signed main()
{
    // start here..

    cin >> n >> x;

    for (int i = 1; i <= n; i++)
        cin >> lose[i] >> win[i] >> use[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = x; j >= use[i]; j--)
            f[j] = max(f[j] + lose[i], f[j - use[i]] + win[i]);
        for (int j = use[i] - 1; j >= 0; j--)
            f[j] += lose[i];
    }

    cout << f[x] * 5 << endl;

    return 0;
}