#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int x, y, x2 , y2, x3, y3, x4, y4;
    freopen("rectangle.in", "r", stdin);
    freopen("rectangle.out", "w", stdout);

    cin >> x >> y >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    // 坑两个：不一定哪条对角线的哪一个点
    // 左下角全取最小
    // 右上角全取最大
    if (x2 < x) swap(x2, x);
    if (y > y2) swap(y, y2);
    if (x3 > x4) swap(x3, x4);
    if (y3 > y4) swap(y3, y4);

    int ans = (x2 - x) * (y2 - y) + (x4 - x3) * (y4 - y3);
    // 不覆盖的情况
    if (x2 <= x3 || x >= x4 || y >= y4 || y2 <= y3) cout << ans;
    else
    {
        // 矩形1 + 矩形2 - 重叠部分
        int tmp = (min(x2, x4) - max(x, x3)) * (min(y2, y4) - max(y, y3));
        cout << ans - tmp;
    }

    return 0;
}