#include <bits/stdc++.h>
using namespace std;
#define int double
int n, m, k, l, r;
bool check(int x)
{
    // 算贷款
    return (pow(1.0 / (1.0 + x), k) >= 1 - n / m * x);
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m >> k;
    l = 0, r = 10;
    // 原值、分期付款、月数

    while (r - l >= 0.0001) // 精度 0.0001 * 100 = 0.01 一个百分比
    {
        int mid = (l + r) / 2;
        if (check(mid))
            r = mid; // 小数不需要加减
        else
            l = mid;
    }
    printf("%.1f", l * 100); // 注意保留
    return 0;
}