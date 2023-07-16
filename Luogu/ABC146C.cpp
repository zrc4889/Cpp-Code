#include <bits/stdc++.h>
using namespace std;
#define int long long
const int _ = 1e9; 
int a, b, x;
int l = 1, r = _;
bool check(int mid)
{
    int sum = mid * a, num = 0;
    while (mid)
    {
        mid /= 10;
        num++;
    }
    return (sum + num * b) <= x;
}
signed main()
{
    #ifdef LOCAL
    LOCALfo
    #endif
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    cin >> a >> b >> x;
    if (a + b > x) return cout << 0 << endl, 0;
    while (l < r)
    {
        int mid = l + r + 1 >> 1;
        if (check(mid)) l = mid;
        else r = mid - 1;
    }
    cout << r << endl;
    return 0;
}