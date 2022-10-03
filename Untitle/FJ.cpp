#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
#define int double
int a[_];
bool vis[_];
signed main()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
    {
        // i
        int flag = 0;
        for (int j = 1; j <= n; j++)
        {
            // a[j]
            for (int p = 1; p <= m; p++)
            {
                if (i == a[j] * (p + 0.5))
                    vis[p] = true;
            }
        }
        if (flag)
            ans++;
    }
    return 0;
}