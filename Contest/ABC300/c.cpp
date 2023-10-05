#include <bits/stdc++.h>
using namespace std;

const int _ = 101;
char a[_][_];
bool vis[_][_];
int s[_];
int n, m;

bool check_map(int x, int y, int i)
{
    return (1 <= x - i && x + i <= n && 1 <= y - i && y + i <= m);
}
bool check_char(int x, int y, int i)
{
    return (a[x + i][y + i] == '#' && a[x - i][y - i] == '#' && a[x + i][y - i] == '#' && a[x - i][y + i] == '#');
}
bool check_vis(int x, int y, int i)
{
    return (!vis[x + i][y + i] && !vis[x - i][y - i] && !vis[x + i][y - i] && !vis[x - i][y + i]);
}

void dfs(int x, int y)
{
    queue<pair<int, int>> q;
    // vis[x][y] = 1;
    int lvl = 0;
    for (int i = 1; i <= 101; ++i)
    {
        // 左上 x - i, y + i
        // 右上 x + i, y + i
        // 左下 x - i, y - i
        // 右下 x + i, y - i
        if (check_map(x, y, i) && check_char(x, y, i))
        {
            q.push(make_pair(x - i, y - i));
            q.push(make_pair(x + i, y - i));
            q.push(make_pair(x + i, y + i));
            q.push(make_pair(x - i, y + i));
        }
        else
            break;
        if (check_map(x, y, i) && check_char(x, y, i) && check_vis(x, y, i))
            lvl++;
        else
        {
            lvl = i - 1;
            break;
        }
    }
    s[lvl]++;
    if (lvl != 0)
        vis[x][y] = 1;
    while (!q.empty())
    {
        auto tmp = q.front();
        q.pop();
        vis[tmp.first][tmp.second] = 1;
    }
    // for (int i = 1; i <= n; ++i)
    // {
    //     for (int j = 1; j <= m; ++j)
    //         cout << vis[i][j] << ' ';
    //     cout << endl;
    // }
    // cout << endl;
}

int main()
{
    // start here..

    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (a[i][j] == '#')
            {
                // if (i == 2 && j == 2)
                dfs(i, j);
            }

    for (int i = 1; i <= min(n, m); ++i)
        cout << s[i] << ' ';

    cout << endl;
    return 0;
}