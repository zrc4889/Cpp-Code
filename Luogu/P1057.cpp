#include <bits/stdc++.h>
using namespace std;

int f[35][35];

int main()
{
    // start here..
    int m, n;
    cin >> n >> m;
    f[0][1] = 1; // 小曼自己有一颗球
    for (int i = 1; i <= m; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            if (j == 1) f[i][j] = f[i - 1][n] + f[i - 1][2];
            if (j == n) f[i][j] = f[i - 1][n - 1] + f[i - 1][1];
            else f[i][j] = f[i - 1][j - 1] + f[i - 1][j + 1];
        }
    }
    cout << f[m][1] << endl;
    return 0;
}