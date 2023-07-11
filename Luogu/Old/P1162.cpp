#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[100][100], n;
void dfs(int x, int y)
{
    if (x < 0 || x > n + 1 || y < 0 || y > n + 1)
        return; 
    if (a[x][y] == 1 || a[x][y] == 2)
        return;
    a[x][y] = 2;
    dfs(x - 1, y);
    dfs(x + 1, y);
    dfs(x, y - 1);
    dfs(x, y + 1);
}
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> a[i][j];
    dfs(0, 0);
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cout << 2 - a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}