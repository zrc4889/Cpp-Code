#include <bits/stdc++.h>
using namespace std;

const int _ = 1001;
int a[_][_], d[_], vis[_];
int n, m;

signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    // pre-work
    int s = 1; // 从 1 开始
    for (int i = 1; i <= n; ++i)
        d[i] = a[s][i]; // 更新点值
    vis[s] = true;

    int sum = 0; // 标记一下是绿色点

    for (int i = 1; i < n; ++i) // 控制轮次
    {
        int u = -1;
        for (int j = 1; j <= n; ++j)
            if (!vis[j] && (u == -1 || d[u] > d[j]))
                // 首先保证没找过
                // 或前面是保证第一个选的点能够被找到
                // 或后面是保证最短
                u = j;
        // u 就是从非绿点找到距离绿点最小距离的点（浅蓝色的点）
        vis[u] = 1;
        sum += d[u];

        for (int j = 1; j <= n; ++j)
            d[j] = min(d[j], a[u][j]); // 原有的和新连的边
    }

    cout << sum << endl;
    return 0;
}