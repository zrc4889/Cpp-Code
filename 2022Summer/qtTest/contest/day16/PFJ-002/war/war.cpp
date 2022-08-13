#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 10;
bool f[_], g[_];
int n, sum, ans = 0;
int a[_];
int main()
{
    freopen("war.in", "r", stdin);
    freopen("war.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        // 极端情况，所有人都去一个队
    }
    f[0] = true;
    // 类似01背包，但是有放A、放B和不放三种情况
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <= sum; ++j)
        {
            if (f[j])
            {
                g[j + a[i]] = true;
                g[abs(j - a[i])] = true;
            }
        }
        for (int j = 0; j <= sum; ++j)
            f[j] |= g[j];
    }
    for (int i = 1; i <= sum; ++i)
        if (f[i])
            ans++;
    cout << ans;
    return 0;
}