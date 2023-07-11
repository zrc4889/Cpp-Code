#include <bits/stdc++.h>
#define int long long
using namespace std;
// Auther: zrc4889
// CSP - J2 2022 T2

signed main()
{
    int T;
    cin >> T;
    int n, d, e;
    while (T--)
    {
        cin >> n >> e >> d;
        int m = n - e * d + 2;
        int flag = 0;

        int l = 1, r = m - 1; // 此处是不可以取到 m 的，请读者自行思考
        while (l <= r)
        {
            int p = l + r >> 1; // 位运算加速 
            int q = m - p;

            if (p * q == n)
            {
                cout << p << ' ' << q << endl;
                flag = 1;
                break;
            }
            else if (p * q < n)
            {
                l = p + 1;
            }
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