#include <bits/stdc++.h>
#define int long long
using namespace std;
int n;
bool check(int k)
{
    int s = n * k;
    while ()
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    // int n;
    cin >> n;

    if ((n & 1))
        return cout << n << endl, 0;

    int fac = 1;

    // for (int i = 1; i <= n; i++)
    // {
    //     fac *= i;
    //     if (fac % n == 0)
    //         return cout << i << endl, 0;
    // }

    int l = 1, r = 1e12;

    while (l + 1 < r)
    {
        int mid = l + r >> 1;
        if (check(mid))
            r = mid;
        else
            l = mid;
    }
    // cout << r << endl;
    return 0;
}