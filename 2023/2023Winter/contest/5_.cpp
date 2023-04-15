#include <bits/stdc++.h>
#define int long long 
using namespace std;

int yueshuhe(int n, int p)
{
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            ans = ans + i % p;
        }
    }
    return ans % p;
}

signed main()
{
    // start here..

    int k, p;
    cin >> k >> p;

    int ans = 1;

    while (k--)
    {
        int a, b;
        cin >> a >> b;
        // cout << yueshuhe(a, b) % p;
        ans = ans * yueshuhe(pow(a, b), p) % p;
    }
    cout << ans << endl;

    return 0;
}