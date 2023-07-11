#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 1e6 + 10;
const int p = 31;
const int mod = 1e9 + 7;
int ha[_], pw[_];
string s;

int get_ha(int l, int r)
{
    return ((ha[r] - ha[l - 1] * pw[r - l + 1]) % mod + mod) % mod;
}

bool check(int len)
{
    int n = s.size() - 1;

    int pre = get_ha(1, 1 + len - 1);

    for (int i = 1 + len - 1; i <= n; i += len)
    {
        int pare = get_ha(i - len + 1, i);
        if (pare != pre)
            return false;
    }

    return true;
}

signed main()
{
    // start here..

    pw[0] = 1;

    while (cin >> s)
    {
        if (s == ".")
            break;

        int n = s.size();
        s = "#" + s;

        for (int i = 1; i <= n; ++i)
            pw[i] = pw[i - 1] * p % mod;

        memset(ha, 0, sizeof ha);

        for (int i = 1; i <= n; ++i)
            ha[i] = (ha[i - 1] * p + s[i]) % mod;

        int res = 0;
        for (int len = 1; len <= n; ++len)
            if (n % len == 0)
                if (check(len))
                {
                    res = n / len;
                    break;
                }

        cout << res << endl;
    }
    return 0;
}