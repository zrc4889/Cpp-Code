#include <bits/stdc++.h>
#define int long long
using namespace std;
const int dx[] = {0, 0, 1, -1};
const int dy[] = {1, -1, 0, 0};
int n;
char mp[101][101];
bool vis[101][101];
struct Node
{
    int x, y, step;
};
queue<Node> q;
void bfs(int sx, int sy)
// 一次的 BFS
{
    memset(vis, 0, sizeof vis);
    vis[sx][sy] = 1;
    q.push(Node{sx, sy, 0});
    while (!q.empty())
    {
        Node tmp;
        tmp = q.front();
        q.pop();
        if (mp[tmp.x][tmp.y] == 'B')
        {
            cout << tmp.step;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            int xn = tmp.x + dx[i], yn = tmp.y + dy[i];
            if (xn < 0 || xn > n || yn < 0 || yn > n || vis[xn][yn] || mp[xn][yn] == mp[tmp.x][tmp.y])
                continue;
            vis[xn][yn] = 1;
            q.push(Node{xn, yn, tmp.step + 1});
        }
    }
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mp[i][j];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (mp[i][j] == 'A')
                bfs(i, j);
    return 0;
}