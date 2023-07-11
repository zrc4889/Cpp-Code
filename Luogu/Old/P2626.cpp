#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1 << 31;
int f[5];
signed main()
{
    int t;
    int n;
    cin >> n;
    f[1] = f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        f[3] = (f[1] + f[2]) % mod;
        f[1] = f[2] % mod, f[2] = f[3] % mod;
    }
    // cout << f[3];
    int k = f[3];
    // int i = 2;
    cout << k << '=';
    // while (n != 0)
    for (int i = 2; i <= k; i++)
    {
        if (k % i == 0)
        {
            cout << i;
            k /= i;
            if (k != 1)
                cout << "*";
            i = 1;
        }
    }
    return 0;
}