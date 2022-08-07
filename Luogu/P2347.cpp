#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
int f[_], a[_];
int num[10] = {0, 1, 2, 3, 5, 10, 20};
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        int n = 0;
    for (int i = 1; i <= 6; ++i)
    {
        int k;
        cin >> k;
        for (int j = 1; j <= k; ++j)
            a[++n] = num[i]; // 拆分成单个物品
    }
    f[0] = 1;
    int sum, ans;
    sum = ans = 0;
    for (int i = 1; i <= n; i++)
        sum += a[i]; // 体积最大值
    // 标准01模板
    for (int i = 1; i <= n; i++)
        for (int j = sum; j >= a[i]; j--)
            f[j] += f[j - a[i]];
    for (int i = 1; i <= sum; i++)
        if (f[i]) // 有一种方案就ans++
            ans++;
    cout << "Total=" << ans << endl;
    return 0;
}