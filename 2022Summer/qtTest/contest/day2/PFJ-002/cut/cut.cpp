#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, m;
int a[114514], b[114514];
bool cmp(int a, int b) { return a > b; }
signed main()
{
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    freopen("cut.in", "r", stdin);
    freopen("cut.out", "w", stdout);
    cin >> n >> m;
    int aa, bb;
    aa = bb = 1;
    for (int i = 1; i < n; ++i)
        cin >> a[i];
    for (int j = 1; j < m; ++j)
        cin >> b[j];
    sort(a + 1, a + n, cmp);
    sort(b + 1, b + n, cmp);
    int ans = 0;
    int i = 1, j = 1;

    while (i < n || j < m)
    {
        if (i >= n || b[j] > a[i])
            ans += b[j++] * bb, ++aa;
        else
            ans += a[i++] * aa, ++bb;
    }
    // cout << ans;
    printf("%lld", ans);
    // sort()
}