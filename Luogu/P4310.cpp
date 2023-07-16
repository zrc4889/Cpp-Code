#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 114514;
int a[_];
int f[_];
int bit[_];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // bit[i] 表示 在所有的子序列中结尾的那个数第i位是1的 最长上升子序列中多长
    // f[i] 以a[i]最长子序列的长度
    int ans = -1;
    for (int i = 1; i <= n; i++)
    {
        f[i] = 1; // 自己本身是一个子序列
        // f[i] = 1;
        for (int j = 0; j < 32; j++)
        {
            if ((a[i] >> j) & 1) // 第 j 位上是否是 1
                f[i] = max(f[i], bit[j] + 1);
        }
        ans = max(ans, f[i]);

        for (int j = 0; j < 32; j++)
        {
            if ((a[i] >> j) & 1)
                bit[j] = max(bit[j], f[i]);
            // 去更新bit[j]
        }
    }
    cout << ans << endl;
    return 0;
}