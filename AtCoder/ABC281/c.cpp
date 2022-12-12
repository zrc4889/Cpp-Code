#include <bits/stdc++.h>
#define int long long 
using namespace std;
const int _ = 1e5 + 10;
int a[_];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, t;
    cin >> n >> t;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    while ((t -= sum) >= 0)
        ;

    // 倍增，但不会写

    t += sum;
    // cout << t << endl;
    int cur = 0;
    for (int i = 1; i <= n; i++)
    {

        if (t - a[i] >= 0)
            t -= a[i], cur = i;
    }
    cout << cur + 1 << ' ' << t << endl;

    return 0;
}