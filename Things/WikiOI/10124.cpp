#include <bits/stdc++.h>
#define int long long
using namespace std;
int l = 0, r = 2000000001, n;
bool check(int k)
{
    return (k * log10(k) + 1) >= n; // 公式
}
signed main()
{
    cin >> n;
    while (l + 1 < r)
    {
        int mid = l + (r - l) / 2; // 更好的方法
        if (check(mid))
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    if (check(l))
        cout << l;
    else if (check(r))
        cout << r;
    // cout << l << endl;
    return 0;
}