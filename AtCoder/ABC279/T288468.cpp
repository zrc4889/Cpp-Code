#include <bits/stdc++.h>
#define int long long 
using namespace std;

int sgn(int b)
{
    if (b > 0)
        return 1;
    if (b < 0)
        return -1;
}

int fun(int a, int b)
{
    return sgn(b) * abs(a);
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int a, b;
    cin >> a >> b;
    cout << fun(a, b);
    return 0;
}