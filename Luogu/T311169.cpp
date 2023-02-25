#include <bits/stdc++.h>
#define INF INT_MAX
using namespace std;

const int _ = 3001;
int a[_][_];
int f[_][_];

int main()
{
    // start here..

    // 30 分的程序
    // 不想花太久时间去写了

    int n, m, k;
    cin >> n >> m >> k;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    // 简易动态规划思想

    memset(f, INF, sizeof f);

    f[1][1] = 1;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            if (a[i][j] == 0)
                continue;
            if (a[i][j + 1] != 0)
                f[i][j + 1] = min(f[i][j + 1], f[i][j] + 1);
            if (a[i][j - 1] != 0)
                f[i][j - 1] = min(f[i][j - 1], f[i][j] + 1);
            if (a[i - 1][j] != 0)
                f[i - 1][j] = min(f[i - 1][j], f[i][j] + 1);
            if (a[i + 1][j] != 0)
                f[i + 1][j] = min(f[i + 1][j], f[i][j] + 1);
        }

    cout << f[n][m] << endl;

    return 0;
}