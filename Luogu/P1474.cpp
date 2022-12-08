#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 120000;
int f[_], a[_];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // f[i] 表示通过组合得到 i 元钱的方案书
    f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = a[i]; j <= m; j++)
            // if (j - a[i] >= 0)
            f[j] += f[j - a[i]];
    cout << f[m] << endl;
    return 0;
}