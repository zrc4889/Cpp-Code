#include <bits/stdc++.h>
#define int long long
using namespace std;
int mod = 1e9 + 7;
int pow(int a, int b, int p)
{
    int res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % p;
        b >>= 1;
        a = a * a % p;
    }
    return res % p;
}
signed main()
{
    freopen("sequence.in", "r", stdin);
    freopen("sequence.out", "w", stdout);
    int n;
    cin >> n;
    // 10^n - 2*9^n + 8^n;
    cout << (pow(10, n, mod) % mod - 2 * pow(9, n, mod) % mod + pow(8, n, mod) % mod + mod) % mod;
    // 加上 mod 防止mod出负数
    return 0;
}