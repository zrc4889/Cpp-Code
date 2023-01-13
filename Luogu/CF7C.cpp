#include <bits/stdc++.h>
using namespace std;

int x, y, d;
int a, b, c;

int ex_gcd(int a, int b)
{
    if (b == 0)
    {
        x = 1, y = 0;
        return a;
    }
    int tmp = ex_gcd(b, a % b);
    int t = x;
    x = y, y = t - a / b * y; // 反推
    return tmp;
}
int main()
{
    // start here..

    int a, b, c;
    cin >> a >> b >> c;

    c = -c;

    // 扩展欧几里得与不定方程
    // 不定方程无解当且仅当 c 不整除 gcd(a, b)

    d = ex_gcd(a, b);
    if (c % d != 0)
        return cout << -1 << endl, 0;

    x = c / d * x;
    y = c / d * y;

    cout << x << y << endl;

    return 0;
}