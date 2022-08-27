#include <bits/stdc++.h>
using namespace std;
const int _ = 5e3 + 10;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int l, n;
    cin >> l >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int minv = 0, maxv = 0;
    // 名不副实的 minv
    for (int i = 1; i <= n; i++)
    {
        minv = max(minv, min(a[i], l - a[i] + 1));
        maxv = max(maxv, max(a[i], l - a[i] + 1));
        // 两种情况：左边下 or 右边下
    }
    cout << minv << ' ' << maxv << endl;
    return 0;
}