#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 10;
int a[_];
// 40pts
bool check(int a, int b)
{
    return (a & b) == b;
}
bool c(int x, int y)
{
    return x >= a[y];
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie();
    // #ifdef LOCAL
    //     LOCALfo
    // #endif
    freopen("include.in", "r", stdin);
    freopen("include.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n);
    int x;
    while (m--)
    {
        // 开始处理

        cin >> x;
        // 二分查找？
        int f = 0;
        int l = 1, r = n;
        // 二分以下第一次比它大的数字位置
        while (l < r)
        {
            int mid = (l + r) >> 1;
            if (c(x, mid))
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        int ans;
        if (c(x, l))
            ans = l;
        else if (c(x, r))
            ans = r;
        for (int i = ans; i <= n; i++)
        {
            if (check(a[i], x))
            {
                f = 1;
                break;
            }
        }
        // while (l < r)
        // {
        //     int mid = (l + r) >> 1;
        //     if (check(a[mid], x))
        //     {
        //         r = mid;
        //     }
        //     else
        //     {
        //         l = mid + 1;
        //     }
        // }
        // int ans;
        // if (check(a[l], x))
        //     ans = l;
        // else if (check(a[r], x))
        //     ans = r;

        // if (check(a[ans], x))
        //     f = 1;
        if (f)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    return 0;
}