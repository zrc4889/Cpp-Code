#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e5 + 10;
int a[maxn], b[maxn], c[maxn], d[maxn];
signed main()
{
    int n;
    int ans = -1;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i] >> c[i] >> d[i];
    }
    int x, y;
    cin >> x >> y;
    for (int i = 1; i <= n; ++i)
        if (x >= a[i] && y >= b[i] && x <= a[i] + c[i] && y <= b[i] + d[i])
            ans = i ;
    cout << ans;
    return 0;
}