#include <bits/stdc++.h>
#define int long long
using namespace std;
int f[50], g[50];
signed main()
{
    int x, y, z;
    cin >> x >> y >> z;
    for (int i = 0; i <= x; ++i)
        f[i] = 1;
    g[x] = y;
    // 初始化

    for (int i = x + 1; i <= z; ++i)
    {
        f[i] = f[i - 1] + g[i - 2];
        g[i] = f[i - x] * y; // 各推个
    }
    cout << f[z] << endl;
    return 0;
}