#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
// int a[_], b[_];
int f[_];
long long qsm(long long a, long long b)
{
    if (b == 0)
        return 1;
    long long res = qsm(a, b / 2);
    if (b % 2)
        return res * res * a;
    else
        return res * res;
}
int main()
{
    int n, m;
    cin >> n >> m;
    // for (int i = 1; i <= n; i++)
    //     cin >> a[i];
    // for (int i = 1; i <= m; i++)
    //     cin >> b[i];
    int a, b;
    for (int i = 1; i <= m; ++i)
    {
        cin >> a >> b;
        for (int t = n; t > 0; t--)
        {
            for (int j = 1; j <= t; j++)
            {
                f[t] = min(f[t], f[t - j] + (int)qsm(j, b) * a);
            }
        }
    }
    cout << f[m];
    return 0;
}