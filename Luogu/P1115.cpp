#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 10;
int a[_], f[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[1] = a[1];
    int ans = -1e6;
    for (int i = 2; i <= n; i++)
        f[i] = max(a[i], f[i - 1] + a[i]);
    for (int i = 1; i <= n; i++)
        ans = max(ans, f[i]);
    cout << ans << endl;
    return 0;
}