#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 10;
int a[_];
int main()
{
    freopen("salary.in", "r", stdin);
    freopen("salary.out", "w", stdout);
    int n, m;
    cin >> n >> m;
    int x, y;
    int ans = 0;
    cin >> x >> y;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n, greater<int>());
    // for (int i = n; i >= 1; i--)
    // {
    //     int j;
    //     for (j = 1; j <= x; j++)
    //     {
    //         ans += a[i] * 3;
    //     }
    //     for (; j <= x + y; j++)
    //     {
    //         ans += a[i] * 2;
    //     }
    // }

    for (int i = 1; i <= x; i++)
        ans += a[i] * 3;
    for (int i = x + 1; i <= x + y; i++)
        ans += a[i] * 2;

    cout << ans << endl;
    return 0;
}