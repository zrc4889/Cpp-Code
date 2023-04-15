#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;
int a[_], f[_];

int main()
{
    // start here..

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    f[n] = 1;

    int xmax = -1;

    for (int i = n - 1; i > 0; --i)
    {
        if (a[i] <= a[i + 1])
            f[i] = f[i + 1] + 1;
        else
            f[i] = 1;
        xmax = max(xmax, f[i]);
    }

    cout << xmax << ' ';

    int l = xmax, ans = 0;
    if (l == 1)
        return cout << n << endl, 0;
    for (int i = 1; i <= n; ++i)
        if (f[i] >= l / 2)
            ans += f[i] - l / 2 + 1;
    cout << ans << endl;
    return 0;
}