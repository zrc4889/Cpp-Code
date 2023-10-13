#include <bits/stdc++.h>
using namespace std;

const int _ = 30;

int v[_], w[_], f[_];
int n, m;
int vv, ww, s;
int cnt = 0;

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
    {
        cin >> vv >> ww >> s;
        for (int j = 1; j <= s; j <<= 1)
        {
            ++cnt;
            v[cnt] = j * vv, w[cnt] = j * ww;
            s -= j;
        }
        if (s)
        {
            ++cnt;
            v[cnt] = s * vv, w[cnt] = s * ww;
        }
    }

    for (int i = 1; i <= cnt; ++i)
        for (int j = w[i]; j <= m; ++j)
            f[j] = max(f[j], f[j - v[i]] + w[i]);

    cout << f[m];
    return 0;
}