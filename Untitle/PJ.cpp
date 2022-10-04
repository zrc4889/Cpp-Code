#include <bits/stdc++.h>
using namespace std;
const int _ = 1e4 + 10;
int a[_], b[_];
int f[_];
int n, h;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
            // a 血量
            // b 体力
            cin >>
        h >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i] >> b[i];
    f[0] = 0;
    // f[i] 表示 使白骨精血量剩余 i 的最小体力值
    for (int i = 1; i <= n; i++)
        for (int j = h; j >= a[i]; j--) // ?
            f[j] = min(f[j], f[j - a[i]] + b[i]);
    cout << f[h] << endl;
    return 0;
}