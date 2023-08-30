#include <bits/stdc++.h>
#define int long long
using namespace std;

int a, b;

int gcd(int a, int b)
{
    return !b ? a : gcd(b, a % b);
}

signed main()
{

    cin >> a >> b;

    int n = gcd(a, b);

    // cout << c << endl;

    int cnt = 1;
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i != 0) continue;
        while (n % i == 0) n = n / i;
        cnt ++;
    }

    if (n != 1) cnt ++;
    cout << cnt << endl;
    
    return 0;
}