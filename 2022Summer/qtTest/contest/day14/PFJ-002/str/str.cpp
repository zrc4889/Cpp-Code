#include <bits/stdc++.h>
#define int long long
using namespace std;
string a;
signed main()
{
    freopen("str.in", "r", stdin);
    freopen("str.out", "w", stdout);
    // 对于每种情况，只有转或者不转
    // 先统计处不转的最长1序列
    // 再统计转后的最长1序列，x或许有规律
    cin >> a;
    // 当且仅当字符串首尾皆为1，拼合才有一定意义
    int l = a.size();
    int t1, t2;
    int ans, Max;
    int l1, l2;
    l1 = l2 = 0;
    ans = 0, Max = -1e18;
    t1 = t2 = 1;
    for (int i = 0; i < l; i++)
    {
        // 考虑不转的情况
        if (a[i] == '1')
            ans++, Max = max(ans, Max);
        if (a[i] == '0')
            ans = 0;
    }
    ans = 0;
    // 考虑转的情况，一定是头1最长序列和尾1最长序列的两个末端的区间任意值
    // 接下来算的是前缀1最长，后缀1最长
    for (int i = 0; i < l; i++)
    {
        if (a[i] == '1')
            ans++, l1 = max(ans, l1);
        else
            break;
    }
    ans = 0;
    for (int i = l - 1; i >= 0; i--)
    {
        if (a[i] == '1')
            ans++, l2 = max(ans, l2);
        else
            break;
    }
    ans = 0;
    Max = max(Max, l1 + l2); // 最后相连取最大值即可
    cout << Max << endl;
    return 0;
}