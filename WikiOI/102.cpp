#include <bits/stdc++.h>
using namespace std;
vector<int> gp[100];
int a[100], p[100], q[100];
int f[100][40000], c[201], w[201], V, n, T;
int m;
int main()
{
    cin >> V >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i] >> p[i] >> q[i]; // 体积和重要度
    }
    T = 0;
    m = 0;
    for (int i = 1; i <= n; ++i)
    {
        //找主件和附件
        if (q[i] != 0)
            continue; // 不是主件
        T++;
        m++;
        gp[T].push_back(m);
        c[m] = a[i];
        w[m] = a[i] * p[i];

        // 定义：价值等于体积*重要度

        int f1 = 0, f2 = 0;

        for (int j = 1; j <= n; ++j) // n 个物品
        {
            if (q[j] == i) // 是此主件的附件

                if (f1 == 0)
                    f1 = j;
                else
                    f2 = j;
            // 找附件编号
        }
        if (f1 > 0)
        // 有附件1
        {
            m++;
            // 构造物品
            gp[T].push_back(m);
            c[m] = a[i] + a[f1];
            w[m] = a[i] * p[i] + a[f1] * p[f1];
        }
        if (f2 > 0)
        // 有附件1
        {
            m++;
            // 构造物品
            gp[T].push_back(m);
            c[m] = a[i] + a[f2];
            w[m] = a[i] * p[i] + a[f2] * p[f2];
        }
        if (f1 > 0 && f2 > 0) // 同时具有
        {

            m++;
            // 构造物品
            gp[T].push_back(m);
            c[m] = a[i] + a[f1] + a[f2];
            w[m] = a[i] * p[i] + a[f1] * p[f1] + a[f2] * p[f2];
        }
    }
    for (int i = 1; i <= T; ++i)
        for (int j = 0; j <= V; ++j)
        {
            f[i][j] = f[i - 1][j];
            for (int k = 0; k < gp[i].size(); ++k)
            {
                int id = gp[i][k];

                if (j >= c[id])
                    f[i][j] = max(f[i][j], f[i - 1][j - c[id]] + w[id]);
            }
        }
    cout << f[T][V] << endl;
    return 0;
}