#include <bits/stdc++.h>
#define int long long
using namespace std;

int x, y;
int a, b;

void ex_gcd(int a, int b)
{
    // 求解不定方程
    if (b == 0)
    {
        x = 1, y = 0;
        return;
    }
    ex_gcd(b, a % b);
    int t = x;
    x = y;
    y = t - a / b * y;
}

signed main()
{
    // start here..

    cin >> a >> b;

    ex_gcd(a, b);
    x = (x + b) % b; // 最小正整数解

    cout << x << endl;

    return 0;
}