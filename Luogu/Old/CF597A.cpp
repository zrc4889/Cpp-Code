#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    // start here..

    int k, a, b;
    cin >> k >> a >> b;

    if (a < 0 && b < 0)
    {
        int t = -a;
        a = -b;
        b = t;
    }
    if (a > 0 && b > 0)
        cout << b / k - (a - 1) / k;
    else
        cout << b / k + (-a) / k + 1;

    return 0;
}