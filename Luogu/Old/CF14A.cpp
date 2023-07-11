#include <bits/stdc++.h>
using namespace std;
string a[55];
int n, m;
int sx = 105, sy = 105, xx, xy;
int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        for (int j = 0; j < m; ++j)
            if (a[i][j] == '*')
            {
                sx = min(sx, i);
                sy = min(sy, j);
                xx = max(xx, i);
                xy = max(xy, j);
            }
    for (int x = sx; x <= xx; ++x)
    {
        for (int y = sy; y <= xy; ++y)
            cout << a[x][y];
        cout << endl;
    }
    return 0;
}