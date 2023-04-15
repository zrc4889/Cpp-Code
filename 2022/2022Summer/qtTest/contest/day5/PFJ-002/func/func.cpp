#include <bits/stdc++.h>
#define int long long
using namespace std;
int func(int x)
{
    /*XYC YYDS*/
    if (x <= 100)
    {
        return 91;
    }
    else if (x >= 101)
    {
        return x - 10;
    }
}
signed main()
{
    freopen("func.in", "r", stdin);
    freopen("func.out", "w", stdout);
    int x;
    while (cin >> x && x != 0)
    {
        cout << func(x) << endl;
    }
    /*XYC YYDS*/
    return 0;
}