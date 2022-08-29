#include <bits/stdc++.h>
#define int long long
using namespace std;
inline int read() // 快读
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
        x = x * 10 + ch - '0', ch = getchar();
    return x * f;
}
int __gcd(int x, int y)
{
    int z = y;
    while (x % y != 0)
    {
        z = x % y;
        x = y;
        y = z;
    }
    return z;
}
void solve()
{
    int x, z;
    x = read(), z = read();
    if (z % x != 0)
    {
        cout << -1 << endl;
        return;
    } // 不能整除
    int tmp = __gcd(z / x, x * x);
    int sq = (int)sqrt(tmp);
    if (sq * sq != tmp)
        cout << -1 << endl;
    else
        cout << (z / x) / sq << endl;
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int x, z;
    int T;
    T = read();
    while (T--)
        solve();
    return 0;
}