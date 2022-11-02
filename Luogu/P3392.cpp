#include <bits/stdc++.h>
using namespace std;
const int _ = 51;
// TODO: 枚举颜色分界点在哪里（枚举i，j到n个行）再统计每个方案数下最小的次数
char ch[_][_];
int n, m;
int ans = 0;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> ch[i][j];
    // 第一行保底白色
    // ans += 不是白色的颜色数量
    for (int j = 1; j <= m; j++)
        if (a[1][j] != 'W')
            ans++;
    // 最后一行保底红色的
    // ans += 不是红色的颜色数量
    for (int j = 1; j <= m; j +)
        if (a[n][j] != 'R')
            ans++;
    // 每种颜色都遍历过去看看选哪一种最优
    for (int i = 2; i <= n - 1; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            int w, r, b;
            if (a[i][j] == 'W')
                w++;
            if (a[i][j] == 'R')
                r++;
            if (a[i][j] == 'B')
                b++;
        }
    }

    return 0;
}