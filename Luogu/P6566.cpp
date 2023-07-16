#include <bits/stdc++.h>
using namespace std;
const int N = 1500 + 10;
int n, m;
int dx[] = {0, 0, 1, 1, 1, -1, -1, -1};
int dy[] = {1, -1, 1, 0, -1, 1, 0, -1};
int g[N * N];
int sum, maxn;
bool star[N][N];
void dfs(int x, int y)
{
    sum++;
    // 星星数量++
    star[x][y] = 0; // 访问过
    for (int i = 0; i < 8; ++i)
    {
        int xx = x + dx[i];
        int yy = y + dy[i];
        if (xx >= 1 && xx <= n && yy >= 1 && yy <= m && star[xx][yy] == 1 // 没访问过
        )
            dfs(xx, yy);
    }
}
int main()
{
    char c;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            cin >> c;
            if (c == '*')
                star[i][j] = true;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (star[i][j] == true)
            { // *号
                dfs(i, j);
                g[sum]++; // g[sum] * sum 就是星星有多少个
                // galaxy[ i ]用于存储有i颗星星的星座有多少个，易知i×galaxy[ i ]就是该星系的星星个数。（i就表示星系中每个星座星星的数量）
                if (sum * g[sum] > maxn)
                    maxn = sum * g[sum]; // 星座 * 星星 = 星系
                sum = 0;                 //统计完清空
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n * m; i++)
    {
        if (g[i] != 0)
            ans++;
    }
    cout << ans << ' ' << maxn << endl;
    return 0;
}