#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int T;
    cin >> T;
    int n, d, e;
    while (T--)
    {
        cin >> n >> e >> d;
        int m = n - e * d + 2; // 数据范围里面写。。。
        int flag = 0;

        int l = 1, r = m - 1, mid;
        while (l <= r)
        {
            // 二分的一个变式
            int p = (l + r) >> 1;
            int q = m - p;
            // 为什么
            if (p * q == n)
            // 满足了条件输出
            {
                cout << p << ' ' << q << endl;
                flag = 1;
                break;
            }
            // 小了往右区间
            else if (p * q < n)
            {
                l = p + 1;
            }
            // 大了往左区间
            else
            {
                r = p - 1;
            }
        }
        if (!flag)
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}