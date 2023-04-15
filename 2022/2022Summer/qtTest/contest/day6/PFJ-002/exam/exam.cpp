#include <bits/stdc++.h>
using namespace std;
int g[105][6], w[105][6];
int f[3005];
int num[105];
int a, b;
int n, t;
int main()
{
    freopen("exam.in", "r", stdin);
    freopen("exam.out", "w", stdout);
    cin >> n >> t;
    for (int i = 1; i <= n; ++i)
    {
        cin >> num[i];
        for (int j = 1; j <= num[i]; ++j)
        {
            cin >> a >> b;

            g[i][j] = g[i][j - 1] + a; // 前缀和
            w[i][j] = w[i][j - 1] + b;
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        for (int j = t; j >= 0; --j)
        {
            for (int k = 1; k <= num[i]; ++k)
            {
                // 分组背包问题
                if (j >= g[i][k])
                {
                    f[j] = max(f[j], f[j - g[i][k]] + w[i][k]);
                }
            }
        }
    }
    cout << f[t] << endl;
    return 0;
}