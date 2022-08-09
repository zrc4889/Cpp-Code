#include <bits/stdc++.h>
#define int long long
using namespace std;
int l, r;
// +100pts
signed main()
{
    freopen("qry.in", "r", stdin);
    freopen("qry.out", "w", stdout);
    cin >> l >> r;
    // gcd(a, b) min 一定是 1
    // gcd(a, b) max 一定是区间最大值
    // lcm(a, b) min 一定是区间最小值
    // lcm(a, b) max 一定是区间最大值乘区间次大值
    cout << 1 << endl;
    cout << r << endl;
    cout << l << endl;
    cout << r * (r - 1) << endl;
    return 0;
}