#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 1e6 + 10;
const int p = 31;
const int mod = 1e6 + 7;

int pw[_], ha[_];
int n;

int get_ha(int l, int r)
{
    return (ha[r] - ha[l - 1] * pw[r - l + 1] % mod + mod) % mod;
}

bool check(int x)
{
    for (int i = x; i < n; i += x)
    {
        if (get_ha(1, x) != get_ha(i + 1, i + x))
            return false;
    }
    return true;
}

signed main()
{
    // start here..
    string s;   
    while (1)
    {
        cin >> s;
        if (s == ".")
            break;

        int n = s.size();
        s = "#" + s;

        pw[0] = 1;
        for (int i = 1; i <= n; ++i)
            pw[i] = pw[i - 1] * p % mod;

        ha[0] = 0;
        for (int i = 1; i <= n; ++i)
            ha[i] = (ha[i - 1] * p + s[i]) % mod;

        for (int i = 1; i <= n; ++i)
            if (n % i == 0 && check(i))
            {
                cout << n / i << endl;
                break;
            }
    }
    return 0;
}