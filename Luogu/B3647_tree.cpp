#include <algorithm>
#include <bits/stdc++.h>
#define INF 100000000
using namespace std;
int a[5000][5000];
int n, m;
signed main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
#endif
    cin >> n;
    cin >> m;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                a[i][j] = 0;
            else
                a[i][j] = INF;
        }
    for (int i = 1; i <= m; i++)
    {
        int x, y, z;
        cin >> x >> y >> z;
        a[x - 1][y - 1] = a[y - 1][x - 1] = z;
    }
    for (int k = 0; k < n; k++)
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                a[i][j] = min(a[i][j], a[i][k] + a[k][j]);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] == INF)
                cout << 0 << ' ';
            else
                cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}