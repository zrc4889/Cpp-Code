#include <bits/stdc++.h>
using namespace std;
int n;
const int dx[] = {1, 0, 0, -1};
const int dy[] = {0, 1, -1, 0};
struct node
{
    int x, y, step;
};
queue<node> q;
const int _ = 101;
bool vis[_][_];
char mp[_][_];
void bfs(int i, int j)
{
    memset(vis, 0, sizeof vis);
    vis[i][j] = 1;
    q.push(node{i, j, 0});
    while (!q.empty())
    {
        node tmp = q.front();
        q.pop();
        if (mp[tmp.x][tmp.y] == 'B')
        {
            cout << tmp.step << endl;
            return;
        }
        for (int i = 0; i < 4; i++)
        {
            int xn = tmp.x + dx[i], yn = tmp.y + dy[i];
            if (xn < 0 || xn > n || yn < 0 || yn > n || vis[xn][yn] || mp[xn][yn] == mp[tmp.x][tmp.y])
                continue;
            vis[xn][yn] = 1;
            q.push(node{xn, yn, tmp.step + 1});
        }
    }
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> mp[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (mp[i][j] == 'A')
                bfs(i, j);
    return 0;
}