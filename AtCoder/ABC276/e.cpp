#include <bits/stdc++.h>
using namespace std;
int n, m;     // 边界
int stx, sty; // 起点位置
int ans;
const int fx[4][2] = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};
vector<int> k[100002], vis[100002];
vector<char> c[100002];
char l;
void dfs(int x, int y, int s)
{
    if (x == stx && y == sty && s >= 4)
    {
        ans = 1;
        return;
    }
    if (s <= k[x][y])
        return;
    k[x][y] = s; // k 记录最大值
    for (int t = 0; t < 4; t++)
    {
        int i = x + fx[t][0], j = y + fx[t][1];
        if (i >= 1 && i <= n && j >= 1 && j <= m)
            if (c[i][j] != '#' && !vis[i][j])
                if (!(i == stx && j == sty) || s + 1 >= 4)
                    vis[i][j] = 1, dfs(i, j, s + 1);
        if (ans)
            return;
    }
}
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        c[i].push_back(' ');
        k[i].push_back(0);
        vis[i].push_back(0);
        // push_back 的首个位置是 0！
        for (int j = 1; j <= m; j++)
        {
            scanf(" %c", &l), c[i].push_back(l);
            k[i].push_back(-1e9), vis[i].push_back(0);
            if (l == 'S')
                stx = i, sty = j, k[i][j] = -1;
        }
    }
    return dfs(stx, sty, 0), printf("%s\n", ans ? "Yes" : "No"), 0;
}