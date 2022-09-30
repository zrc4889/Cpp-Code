#include <bits/stdc++.h>
using namespace std;
int cnt[5];
const int _ = 600;
const int M = 60;
int a[_], f[M][M][M][M];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
    {
        int tmp;
        cin >> tmp;
        cnt[tmp]++;
    }
    f[0][0][0][0] = a[1];
    for (int i = 0; i <= cnt[1]; ++i)
        for (int j = 0; j <= cnt[2]; ++j)
            for (int k = 0; k <= cnt[3]; ++k)
                for (int l = 0; l <= cnt[4]; ++l) // 四种卡片
                {
                    int p = 1 * i + 2 * j + 3 * k + 4 * l + 1; // 到了哪一个
                    f[i + 1][j][k][l] = max(f[i + 1][j][k][l], f[i][j][k][l] + a[p + 1]);
                    f[i][j + 1][k][l] = max(f[i][j + 1][k][l], f[i][j][k][l] + a[p + 2]);
                    f[i][j][k + 1][l] = max(f[i][j][k + 1][l], f[i][j][k][l] + a[p + 3]);
                    f[i][j][k][l + 1] = max(f[i][j][k][l + 1], f[i][j][k][l] + a[p + 4]);
                }
    cout << f[cnt[1]][cnt[2]][cnt[3]][cnt[4]] << endl; // 高维线性dp
    return 0;
}