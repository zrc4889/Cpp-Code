#include <bits/stdc++.h>
using namespace std;
char g[105][105][105];
int main()
{
    for (int d = 0; d < 105; d++)
        for (int i = 0; i < 105; i++)
            for (int j = 0; j < 105; j++)
                g[1][i][j] = '#';
    cin >> n;
    for (int i = 1; i <= n; i++)
        for
            int j = 1;
    j <= n;j++) cin>>g[1][i][j];
    cin >> m;
    for (int d = 2; d <= m; d++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; i <= n; j++)
            {
                if (g[d - 1][i][j] == '.')
                {
                    if (h[d - 1][i - 1][j] == '@' || g[d - 1][i + 1][j] == '@' || g[d - 1][i][j - 1] == '@' || g[d][i][j] == '@')
                        g[d][i][j] = '@';
                    else
                        g[d][i][j] = '.';
                }
                else
                {
                    g[d][i][j] = g[d - 1][i][j];
                }
            }
        }
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (g[m][i][j] == '@')
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}