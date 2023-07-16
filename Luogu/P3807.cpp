#include <bits/stdc++.h>
#define int long long
using namespace std;

int p;

int fac(int x)
{
    int res = 1;
    for (int i = 1; i <= x; i++)
        res = res * i % p;
    return res % p;
}

int ksm(int a, int b, int c)
{
    // 好看的模板
    if (b == 0)
        return 1 % c;
    if (b == 1)
        return a % c;
    int t = ksm(a, b / 2, c);
    t = t * t % c;
    if (b % 2 == 1)
        t = t * a % c;
    return t;
}

int C(int n, int m)
{
    if (n < m)
        return 0;

    int a = fac(n);
    int b = fac(m);
    int c = fac(n - m);

    return a * ksm(b, p - 2, p) % p * ksm(c, p - 2, p) % p;
}

int lucas(int n, int m)
{
    if (m == 0)
        return 1;

    return lucas(n / p, m / p) * C(n % p, m % p) % p;
}

signed main()
{
    // start here..

    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        scanf("%lld%lld%lld", &a, &b, &p);
        printf("%lld\n", lucas(a + b, a));
    }

    return 0;
}