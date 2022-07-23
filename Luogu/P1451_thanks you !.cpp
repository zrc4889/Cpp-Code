#include <cstdio>

const int _ = 1e3 + 5;
int n, m;
int cnt = 0;
char s[_][_];
bool vis[_][_];
int d[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

void dfs(int x, int y)
{
    // 边界条件
    if (x <= 0 || y <= 0 || x >= n || y >= m || vis[x][y] || s[x][y] == '0')
        return;
    for (int i = 0; i < 4; ++i)
        dfs(x + d[i][0], y + d[i][1]);
}
int main() 
{
#ifdef LOCAL
    LOCALfo
#endif
        printf("%d %d", n, m);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            printf("%c", s[i][j]);
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (s[i][j] != '0' && !vis[i][j])
                cnt++, dfs(i, j);
    scanf("%d", &cnt);
}