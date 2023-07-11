#include <bits/stdc++.h>
using namespace std;
const int _ = 51;
// TODO: 枚举颜色分界点在哪里（枚举i，j到n个行）再统计每个方案数下最小的次数 2022年11月3日
// TOOD：2022年11月4日 优化
char ch[_][_];
int n, m;
int ans = 0x7fffffff;

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
    for (int i = 2; i < n; i++)
        for (int j = i + 1; j <= n; j++)
        {
            // 枚举分界点
            int sum = 0;
            for (int x = 1; x < i; x++)
                for (int y = 1; y <= m; y++)
                    if (ch[x][y] != 'W')
                        sum++;
            for (int x = i; x < j; x++)
                for (int y = 1; y <= m; y++)
                    if (ch[x][y] != 'B')
                        sum++;
            for (int x = j; x <= n; x++)
                for (int y = 1; y <= m; y++)
                    if (ch[x][y] != 'R')
                        sum++;
            ans = min(ans, sum);
        }
    cout << ans << endl;
    return 0;
}