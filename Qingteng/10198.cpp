#include <bits/stdc++.h>
#define int long long

using namespace std;

signed main()
{
    int n;
    cin >> n;
    // 试除法
    int ans = 0;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            ans++;
            if (i * i != n)
                ans++;
        }
    }
    cout << ans << endl;

    return 0;
}