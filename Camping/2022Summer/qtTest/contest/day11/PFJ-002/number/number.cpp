#include <bits/stdc++.h>
using namespace std;
int a[] = {0, 0, 1, 5, 6, 25, 76, 376, 625, 9376, 90625, 109376, 890625, 2890625, 7109376, 12890625, 87109376, 212890625, 787109376, 1787109376};
signed main()
{
    // /#ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= 18; i++)
    {
        if (a[i] <= n)
        {
            cout << a[i] << ' ';
        }
        else if (a[i] > n)
            break;
    }

    return 0;
}