#include <bits/stdc++.h>
using namespace std;
const int N = 1000 + 10;
char a[N][N];
bool vis[N][N];
int tag;
int n, m;
int b[N][N];
int sum[N * N];
void dfs(int x, int y, int v)
{
    if (x < 1 || x > n || y < 1 || y > n)
        return;
    int cur = a[x][y] - '0';
    if (v == cur || vis[x][y] == 1)
        return;
    vis[x][y] = 1;
    sum[tag]++; // 标签为tag的格子又多了一个
    b[x][y] = tag;
    dfs(x - 1, y, cur);
    dfs(x + 1, y, cur);
    dfs(x, y - 1, cur);
    dfs(x, y + 1, cur);
    // if ()
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    // 字符数组处理
    memset(vis, 0, sizeof(vis));
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {
            if (vis[i][j] == 0)
            {
                //新的连通块
                tag++;
                dfs(i, j, -1);
            }
        }
    for (int i = 1; i <= m; ++i)
    {
        int x, y;
        cin >> x >> y;
        int t = b[x][y]; // 拿标签
        cout << sum[t] << endl;
    }
    return 0;
}