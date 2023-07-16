#include <bits/stdc++.h>
#define int long long
using namespace std;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
int n, m;
int sx, sy;
int ans;
int dis[21][21];
char a[21][21];
bool vis[21][21];
struct NODE
{
    int x, y;
};
queue<node> q; // BFS 必备
int bfs(int sx, int sy)
{
    int ret = 0;
    memset(vis, 0, sizeof vis), memset(dis, 0, sizeof dis);
    // 以每一个点为单位，进行bfs
    q.push(NODE{sx, sy});
    // 先将此点 push 进队列
    vis[sx][sy] = 1;
    // 标记访问过
    while (!q.empty())
    {
        int x = q.front().x;
        int y = q.front().y;
        // 去除下一步要走的地点 x，y
        q.pop();
        // 并弹出
        for (int i = 0; i < 4; i++)
        // 遍历四个方向
        {
            int xn = x + dx[i], yn = y + dy[i];
            // 计算下一个点的坐标
            if (xn < 0 || xn > n || yn < 0 || yn > m || vis[xn][yn] || a[xn][yn] == '#')
                continue;
            // 判断此点是否出界
            vis[xn][yn] = 1;
            // 标记下一个点已经走过
            dis[xn][yn] = dis[x][y] + 1;
            // 注意此处后者不是 sx、sy，因为此点是源点，上一步的点应该是 x、y
            ret = max(ret, dis[xn][yn]);
            // 依题意，取距离最大
            q.push(NODE{xn, yn});
            // 将此点 push 进队列
        }
    }
    return ret; // 返回结果
}
signed main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            if (a[i][j] != '#')
                ans = max(ans, bfs(i, j));
    cout << ans << endl;
    return 0;
}