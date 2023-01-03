#include <bits/stdc++.h>
#define int long long 
using namespace std;

const int _ = 114514;
int a[_], b[_], pos[_]; // pos 原始位置

signed main()
{
    // start here..

    int T;
    cin >> T;

    while (T--)
    {
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
            pos[a[i]] = i; // 记录位置
        }

        int curpos = 0, ans = 0;
        // 最低深度
        for (int i = 1; i <= m; i++)
        {
            cin >> b[i];
            if (curpos <= pos[b[i]])
            {
                ans += (2 * (pos[b[i]] - i) + 1);
                curpos = pos[b[i]];
            }
            else
                ans++;
        }
        cout << ans << endl;
    }

    return 0;
}