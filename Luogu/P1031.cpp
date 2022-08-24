#include <bits/stdc++.h>
using namespace std;
const int _ = 101;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    int tot = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        tot += a[i];
    }
    tot /= n;
    // 算平均数
    for (int i = 1; i <= n; i++)
    {
        a[i] -= tot; // 算与平均数的差
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i])
            a[i + 1] += a[i], ans++;
    }

    cout << ans << endl;
    return 0;
}