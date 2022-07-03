#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 2e5 + 10;
int n, f[N], ans = 0;
signed main()
{
    cin >> n;
    f[0] = 1;
    for (int i = 2; i <= n; ++i)
    {

        int x = i, mul = 1;
        cout << "x = " << x;
        cout << " mul = " << mul << endl;
        for (int j = 2; j * j <= x; ++j)
        {
            int cnt = 0;
            while (x % j == 0)
            {
                x /= j;
                cnt++;
            }
            if (cnt & 1)
                mul *= j;
            cout << "cnt = " << cnt << " "
                 << "mul = " << mul << endl;
            // for (int c=1;c<=mul;c++)
            // {
            //     cout<<f[i];
            // }
        }
        if (x > 1)
            mul *= x;

        if (mul > 1)
            f[mul]++;
        else
            f[0]++;
    }

    for (int i = 0; i <= n; ++i)
        ans += f[i] * f[i];
    cout << ans << endl;
    return 0;
}
