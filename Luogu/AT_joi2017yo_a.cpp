#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    // int sum = 0;

    // for (int i = a; i < b; i++)
    // {
    //     if (i < 0)
    //         sum += c;
    //     if (i == 0)
    //         sum += d;
    //     if (i > 0)
    //         sum += e;
    // }

    cout << (a <= 0 ? -a * c + d + b * e : (b - a) * e) << endl;

    return 0;
}