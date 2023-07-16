#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e5 + 10;
int n, k;
int a[_], b[_];
signed main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    for (int i = 1; i < n; ++i) // i + 1 所以不用等于 n
    {
        b[i] = a[i + 1] - a[i]; // 好像差分啊
    }
    // cout << b[n];
    sort(b + 1, b + n); // 不要 n + 1
    int ans = 0;
    for (int i = 1; i <= k; i++)
    {
        ans += b[i];
    }
    cout << ans << endl;
    return 0;
}
