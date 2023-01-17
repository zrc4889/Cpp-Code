#include <bits/stdc++.h>
using namespace std;

long long p;

long long ksm(long long a, long long b, long long c)
{
    if (b == 0)
        return 1 % c;
    long long t = ksm(a, b / 2, c);
    t = t * t % c;
    if (b % 2 == 1)
        t = t * a % c;
    return t;
}
long long Inv(long long x)
{
    return ksm(x, p - 2, p);
}

long long C(long long a, long long b)
{
    if (b > a)
        return 0;
    long long x = 1;
    long long y = 1;
    for (long long i = a - b + 1; i <= a; ++i)
        x = x * i % p;
    for (long long i = 2; i <= b; ++i)
        y = y * i % p;
    return x * Inv(y) % p;
}

long long Comb(long long a, long long b)
{
    if (b == 0)
    {
        return 1;
    }
    return Comb(a / p, b / p) * C(a % p, b % p) % p;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        scanf("%lld%lld%lld", &n, &m, &p);
        printf("%lld\n", Comb(n + m, n));
    }
    return 0;
}
