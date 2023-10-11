for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
    {
        if (j < w[i])
            f[i][j] = f[i - 1][j];
        else
            f[i][j] = max(
                f[i - 1][j],
                f[i][j - w[i]] + c[i]
            );
    }
cout << f[n][m] << '\n';

for (int i = 1; i <= n; ++i)
    for (int j = 1; j <= m; ++j)
    {
        if (j < w[i])
            f[j] = f[j];
        else
            f[j] = max(
                f[j],
                f[j - w[i]] + c[i];
            );
    }

for (int i = 1; i <= n; ++i)
    for (int j = w[i]; j <= m; ++j)
        f[j] = max(f[j], f[j - w[i]] + c[i]);

for (int i = 1; i <= n; ++i)
    for (int j = m; j >= w[i]; --j)
        f[j] = max(f[j], f[j - w[i]] + c[i]);

int cnt = 1;

for (int i = 1; i <= n; ++i)
{
    cin >> tv >> tw >> ts;

    // 下面进行 二进制拆分
    for (int j = 1; j <= ts; j <<= 1)
    {
        v[cnt] = j * tv;
        w[cnt] = j * tw;
        ++ cnt;
        ts -= j;
    }
    if (ts)
    {
        v[cnt] = ts * tv;
        w[cnt] = ts * tw;
    }
}
-- cnt;

for (int i = 1; i <= cnt; ++i)
    for (int j = m; j >= w[i]; --j)
        f[j] = max(f[j], f[j - w[i]] + c[i]);   