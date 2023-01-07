#include <bits/stdc++.h>
#define int long long
using namespace std;

bool isprime(int n)
{
    // int cnt = 0;

    if (n <= 1)
        return false;

    for (int i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
            // cnt++;
            // if (i * i != n)
            //     cnt++;
        }
    }

    return true;

    // if (cnt == 3)
    //     return true;
    // else
    //     return false;
}

signed main()
{
    // start here..

    ios::sync_with_stdio();
    cin.tie(0), cout.tie(0);

    int t;

    while (cin >> t)
    {
        // cout << t << endl;

        int c = isprime(sqrt(t));

        int p = sqrt(t);

        if (p * p == t && c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}