#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isp(int x)
{
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

signed main()
{
    // start here..

    int n;
    cin >> n;

    if (n == 1 || n == 0) cout << "No" << endl;

    else cout << ( isp(n) == 1 ? "Yes" : "No" ) << endl;

    return 0;
}