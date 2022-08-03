#include <bits/stdc++.h>
using namespace std;

int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("angle.in", "r", stdin);
    freopen("angle.out", "w", stdout);
    int x;
    double y;
    cin >> x >> y;
    x %= 12;
    double v = y * 6;
    double s = x * 30 + 30 * (y / 60);
    // ans += (x % 12) * 30;
    // // 加上没有偏移的情况
    // ans -= y * 6;
    // // 减去分针
    // ans += (y / 60) * 30
    printf("%.1f", min(fabs(v - s), 360.0 - abs(v - s)));

    // 注意
    return 0;
}