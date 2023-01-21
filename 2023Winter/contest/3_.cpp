#include <bits/stdc++.h>
#define int long long
using namespace std;

const int p = 1e9 + 7;

int ksm(int a, int b, int c)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % c;

    int t = ksm(a, b / 2, c);
    t = t * t % c;
    if (b % 2 == 1)
        t = t * a % c;
    return t;
}

int fac(int x)
{
    int ans = 1;
    for (int i = 1; i <= x; i++)
        ans = ans * i % p;
    return ans % p;
}

int C(int n, int m, int mod)
{
    if (m > n)
        return 0;
    if (m == 0)
        return 1;

    int a = fac(n) % p;
    int b = fac(m) % p;
    int c = fac(n - m) % p;

    int t = a * ksm(b, p - 2, p) % p * ksm(c, p - 2, p) % p;
    return t;
}
signed main()
{
    // start here..

    int n, m;
    cin >> n >> m;

    // C^{m}_{n} n 更大
    // 当 m == 0 说明边界，返回 1（此处 n == m 也可）
    // 不满足 m <= n 条件 break

    cout << C(n + m - 1, n - 1, p);

    return 0;
}