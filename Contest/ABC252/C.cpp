#include <bits/stdc++.h>
#define int long long
using namespace std;
int k;
string f[105];
int n;
bool vis[100000];
int solve(int x)
{
    memset(vis, 0, sizeof(vis));
    int now = 0;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 0; j <f[i].size(); ++j)
        {
            if (f[i][j] - '0'== x)
            {
                k = j;
                break;
            }
        }
        while (vis[k])
            k += 10;
        vis[k] = true; // 相当于取余

        now = max(now, k);
    }
    return now;
}
signed main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
    }
    int ans = 1e18; 
    for (int i = 0; i <= 9; i++)
    {
        ans = min(ans, solve(i));
        // 最小
    }
    cout << ans << endl;
    return 0;
}