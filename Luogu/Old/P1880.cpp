#include <bits/stdc++.h>
using namespace std;
const int _ = 500;
const int INF = 0x7f7f7f7f;
int a[_], s[_];
int Max[_][_], Min[_][_];
int max_, min_;
inline int dis(int i, int j)
{
    return s[j] - s[i - 1];
}
signed main()
{
    memset(Min, INF, sizeof(Min)); // Min 全部都是最大值
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        a[i] = a[i + n] = tmp; // 使其成为一个环
    }
    for (int i = 1; i <= 2 * n; i++)
        Max[i][i] = Min[i][i] = 0; // 不合并自己，优化
    for (int i = 1; i <= n + n; i++)
        s[i] = s[i - 1] + a[i]; // 记得 n + n 拆环为链
    for (int i = 1; i <= n; i++)
    {
        for (int l = 1; l + i <= 2 * n; l++)
        {                      // l + i 防止区间不够了
            int r = l + i - 1; // 区间长度 + 左端点 - 1 即区间右端点
            for (int mid = l; mid < r; mid++)
            { // 枚举区间的每一个可以合并的端点
                Max[l][r] = max(Max[l][mid] + Max[mid + 1][r] + dis(l, r), Max[l][r]);
                Min[l][r] = min(Min[l][mid] + Min[mid + 1][r] + dis(l, r), Min[l][r]);
            }
        }
    }
    min_ = INF;
    max_ = -1;
    for (int i = 1; i <= n; i++)
    {
        min_ = min(min_, Min[i][i + n - 1]);
        max_ = max(max_, Max[i][i + n - 1]);
    }
    cout << min_ << endl
         << max_ << endl;
    return 0;
}