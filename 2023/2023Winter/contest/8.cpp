#include <bits/stdc++.h>
#define int long long 
using namespace std;
// const int _ = 1e7 + 1;

// bool isp[_];
// int pr[1145714];
// int phi[_];

int cnt = 0;
int all(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
        ans += i;
    return ans;
}

int f(int n)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
        if (__gcd(i, n) == 1)
            ans += i;
    return ans;
}

signed main()
{
    // start here..

    int T;
    // fac(1001);
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        // cout << all(n) << ' ' << phi[n] << endl;
        cout << all(n) - f(n) << endl;
    }

    return 0;
}