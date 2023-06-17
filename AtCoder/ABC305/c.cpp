#include <bits/stdc++.h>
using namespace std;

char a[501][501];

int main()
{
    // start here..

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    int minx = 501, miny = 501, maxy = -1, maxx = -1;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (a[i][j] == '#')
            {
                minx = min(minx, i);
                miny = min(miny, j);
                maxx = max(maxx, i);
                maxy = max(maxy, j);
            }

    for (int i = minx; i <= maxx; ++i)
        for (int j = miny; j <= maxy; ++j)
        {
            if (a[i][j] == '.')
            {
                return cout << i << ' ' << j << endl, 0;
            }
        }

    return 0;
}