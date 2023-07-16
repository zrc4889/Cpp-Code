#include <bits/stdc++.h>
using namespace std;
#define int double
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int xa, ya;
    int xb, yb;
    cin >> xa >> ya >> xb >> yb;
    printf("%.3f", sqrt(abs(xa - xb) * abs(xa - xb) + abs(ya - yb) * abs(ya - yb)));
    return 0;
}