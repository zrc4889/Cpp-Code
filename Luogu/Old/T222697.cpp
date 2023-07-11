#include <bits/stdc++.h>
using namespace std;
int n, a[105], xx[105], yy[105], q[105], ans = 0;
int main()

{
    cin >> n;
    for (int i = 1; i <= n; ++i)
        cin >> xx[i] >> yy[i] >> q[i];
    for (int i = 1; i <= n; ++i)
    {
        int sum = 0;
        memset(a, 0, sizeof(a));
        a[i] = 1;
        for (int j = 1; j <= n; ++j)
        {
            swap(a[xx[j]], a[yy[j]]);
            sum += a[q[j]];
        }
        ans = max(ans, sum);
    }
    cout << ans;
    // system("pause");
    return 0;
}