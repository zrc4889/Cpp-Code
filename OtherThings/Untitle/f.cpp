#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 1e3 + 10;
const int mod = 1e6 + 8;
int f[_];

int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int phi(int x)
{
    int res = 0;

    for (int i = 1; i < x; ++i)
        if (gcd(i, x) == 1)
        {
            res++;
            res %= mod;
        }

    return res % mod;
}

void fab()
{
    f[1] = 1, f[2] = 1;
    for (int i = 3; i <= 50; ++i)
        f[i] = (f[i - 1] + f[i - 2]) % mod;
    return;
}

bool is_prime(int x)
{
    if (x == 1) return false;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
            return false;
    return true;
}

signed main()
{
    int q;
    cin >> q;

    fab();

    while (q--)
    {
        int a;
        cin >> a;
        if (is_prime(a))
            cout << ((f[a] - 1) * phi(f[a + 1])) % mod << endl;
        else
            cout << (phi(f[a]) * phi(f[a + 1])) % mod << endl;
    }

    return 0;
}