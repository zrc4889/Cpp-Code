#include <bits/stdc++.h>
#define int long long
using namespace std;

int qpow(int a, int b, int c)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % c;
    int t = qpow(a, b / 2, c);
    t = t * t % c;
    if (b % 2 == 1)
        t = t * a % c;
    return t % c;
}

signed main()
{
    // start here..

    int k, p;
    int ans = 1;
    cin >> k >> p;
    while (k--)
    {
        int a, b;

        cin >> a >> b;

        int s = 0;
        for (int i = 0; i <= b; i++)
        {
            s += qpow(a, i, p);
        }

        ans = (ans * s) % p;
    }

    cout << ans % p << endl;

    return 0;
}