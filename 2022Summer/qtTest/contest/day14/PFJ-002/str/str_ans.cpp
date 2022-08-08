#include <bits/stdc++.h>
#define int long long
using namespace std;
char a[11451419];
signed main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    // 环复制
    freopen("str.in", "r", stdin);
    freopen("str.out", "w", stdout);
    cin >> a;
    // cout << a;
    int l = strlen(a);
    for (int i = l; i < 2 * l; i++)
    {
        a[i] = a[i - l];
    }
    int ans = 0;
    // int l1, l2;
    int Max = 0;
    // 考虑转的情况，一定是头1最长序列和尾1最长序列的两个末端的区间任意值
    // 接下来算的是前缀1最长，后缀1最长
    for (int i = 0; i < l; i++)
    {
        // 考虑不转的情况
        if (a[i] == '1')
            ans++, Max = max(ans, Max);
        if (a[i] == '0')
            ans = 0;
    }
    // Max = max(Max, l1 + l2); // 最后相连取最大值即可
    cout << Max << endl;
    return 0;
}