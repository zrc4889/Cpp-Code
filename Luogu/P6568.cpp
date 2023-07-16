#include <bits/stdc++.h>
using namespace std;
const int _ = 1e6 + 10;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    a[0] = 0;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    int ans = -1;
    for (int i = 1; i <= n - k; i++)
    {
        ans = max(ans, a[i + k] - a[i - 1]);
    }
    cout << ans << endl;
    return 0;
}