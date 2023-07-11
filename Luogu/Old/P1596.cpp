#include <bits/stdc++.h>
using namespace std;
const int _ = 101;
int dx, dy;
int n, m;
char a[_][_];
void dfs(int x, int y)
{
    a[x][y] = '.'; // 标记
    for (int i = -1; i <= 1; i++)
        for (int j = -1; j <= 1; j++)
        {
            dx = x + i, dy = y + j;
            if (dx >= 0 && dy >= 0 && dx <= n && dy <= m) // 地图边界
                if (a[dx][dy] == 'W')
                    dfs(dx, dy);
        }
    return;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] == 'W')
                dfs(i, j), ans++;
    cout << ans;
    return 0;
}