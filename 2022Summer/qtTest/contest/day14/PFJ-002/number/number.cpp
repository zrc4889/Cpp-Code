#include <bits/stdc++.h>
using namespace std;
#define int long long
const int d[5] = {0, 2, 3, 5, 6};
int a[40]; // 四进制
int n, t, cnt = 0;
signed main()
{
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);

    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        cnt = 0;
        while (n > 0)
        {
            a[++cnt] = n % 4;
            if (a[cnt] == 0)
            {
                a[cnt] = 4;
                n -= 4;
            }
            n /= 4; // 模仿四进制
        }
        for (int i = cnt; i >= 1; --i)
            cout << d[a[i]];
        cout << endl;
    }
}