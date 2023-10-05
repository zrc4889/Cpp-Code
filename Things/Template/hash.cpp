#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 1e6 + 10;
const int mod = 1e7 + 1;
const int p = 31;

int h[_], pw[_];
int n, m;

string a, b;

int sum(int l, int r)
{
    return (h[r] - h[l - 1] * pw[r - l + 1] % mod + mod) % mod;
}

signed main()
{
    // start here..
    
    cin >> a >> b;

    a = "#" + a;
    b = "#" + b;

    int n = a.size() - 1, m = b.size() - 1;

    pw[0] = 1;
    for (int i = 1; i <= n; ++i)
        pw[i] = pw[i - 1] * p % mod;


    for (int i = 1; i <= n; ++i)
    {
        h[i] = (h[i - 1] * p + (int)a[i]) % mod;
    }

    int res = 0;
    for (int i = 1; i <= m; ++i)
    {
        res = (res * p + (int)b[i]) % mod;
    }

    int ans = 0;
    for (int i = 1; i <= n - m + 1; ++i)
    {
        int tmp = sum(i, i + m - 1); 
        if (tmp == res)
            ans++;
    }

    cout << ans << endl;
    return 0;
}