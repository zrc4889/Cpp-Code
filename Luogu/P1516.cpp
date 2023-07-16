#include <bits/stdc++.h>
#define int long long 
using namespace std;

int a, b, c, x, y, n, m, l;

int exgcd(int a, int b, int& x, int &y)
{
    if (b == 0)
    {
        x = 1, y = 0;
        return a;
    }
    int xx, yy;
    int d = exgcd(b, a % b, xx, yy);
    x = yy, y = xx - a / b * yy;
    return d;
}

signed main()
{
    // start here..

    cin >> x >> y >> m >> n >> l;
    a = x - y, b = n - m;
    if (b < 0)
    {
        a = -a, b = -b;
    } // 方便处理同余

    int d = exgcd(b, l, x, y);

    if (a % d)
        cout << "Impossible" << endl;
    else
    {
        int mod = (l / d);
        // 纬线圈总长
        cout << (x * (a / d) % mod + mod) % mod << endl;
        // 加了再模防止负数
    }

    return 0;
}