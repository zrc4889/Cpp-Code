#include <bits/stdc++.h>
#define int long long
using namespace std;

int m, n, ans;
signed main()
{
    cin >> m >> n;
    if (m == n)
        ans--;
    n *= m; // 满足x * y
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0 /*整除*/ && __gcd(i, n / i) /*最小公倍数*/ == m)
            ans += 2;
    }
    cout << ans;
    return 0;
}