#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n, m;
    cin >> n >> m;
    int ans, k;
    ans = k = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            ans += i * j;
    for (int i = 0; i < min(n, m); i++)
        k += (m - i) * (n - i);
    cout << k << " " << ans - k;

    return 0;
}