#include <bits/stdc++.h>
using namespace std;
int n, m;
char a[1005][1005];
int h, l; // 行和列
int q;
int s = 0;
int k;
void dfs(int x, int y)
{
    ++q;
    a[x][y] = '.';
    if (x < 0 || x > n || y < 0 || y > m)
        return;
    if (a[x - 1][y] == '#') 
        dfs(x - 1, y);
    if (a[x + 1][y] == '#')
        dfs(x + 1, y);
    if (a[x][y + 1] == '#')
        dfs(x, y + 1);
    if (a[x][y - 1] == '#')
        dfs(x, y - 1);
}
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (a[i][j] == '#')
            {
                q = 0;        // 清空 #
                h = 0, l = 0; // 清空 行和列
                for (int x1 = i; x1 <= n; ++x1)
                {
                    if (a[x1][j] == '#')
                        ++l; // 找出列
                    else
                        break;
                }
                for (int x2 = j; x2 <= m; ++x2)
                {
                    if (a[i][x2] == '#')
                        ++h;
                    else
                        break;
                }
                k = h * l; // 方阵
                dfs(i, j);
                if (q != k)
                {
                    cout << "Bad placement." << endl;
                    return 0;
                }
                s++;
            }
        }
    }
    cout << "There are " << s << " ships." << endl;
    return 0;
}