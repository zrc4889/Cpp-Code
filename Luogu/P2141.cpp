#include <bits/stdc++.h>
using namespace std;
const int _ = 105;
int a[_], b[_], g[_];

signed main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        // b[i] = 0;
    }
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        for (int o = i + 1; o < n; o++)
            for (int p = 0; p < n; p++)
            {
                if (a[p] == a[o] + a[i] && b[p] != 1)
                {
                    ans++;
                    b[p] = 1;
                }
            }
    }
    cout << ans << endl;
    return 0;
}