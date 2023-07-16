#include <bits/stdc++.h>
using namespace std;
int f[105], g[105], t[105];
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> t[i];
    // f[i] 代表前i个人被请出去
    // g[i] 代表后i个人被请出去
    for (int i = 1; i <= n; ++i)
    {
        f[i] = 1;
        for (int j = 1; j < i; j++)
        {
            if (t[j] < t[i])
                f[i] = max(f[i], f[j] + 1);
        }
    }
    for (int i = n; i > 0; --i)
    {
        g[i] = 1;
        for (int j = n; j > i; j--)
        {
            if (t[j] < t[i])
                g[i] = max(g[i], g[j] + 1);
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, f[i] + g[i] - 1);
    cout << n - ans << endl;
    return 0;
}