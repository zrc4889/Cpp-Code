#include <bits/stdc++.h>
#define int long long 
using namespace std;

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int T;
    cin >> T;
    while (T--)
    {
        int x, l, r;
        cin >> l >> r >> x;
        if (l / x != r / x)
            cout << 1 << endl;
        else
            cout << l / x << endl;
    }
    return 0;
}