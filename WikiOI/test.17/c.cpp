#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 1e8;
int s[_], dis[_];

signed main()
{
    // start here..
    int n, a, b;
    cin >> n >> a >> b;

    for (int i = 1; i <= n; i++)
    {
        cin >> s[i];
    }

    for (int i = 2; i <= n; i++)
    {
        dis[i] = (s[i] - s[i - 1]) * a;
        dis[i] = min(dis[i], b);
    }

    int ans = 0;

    for (int i = 2; i <= n; i++)
    {
        ans += dis[i];
    }

    cout << ans << endl;

    return 0;
}