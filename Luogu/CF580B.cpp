#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e5 + 10;
int n, d, ans, sum[maxn];
struct node
{
    int x, y;
} a[maxn];
bool cmp(node a, node b)
{
    return a.x < b.x;
}
signed main()
{
    cin >> n >> d;
    for (int i = 1; i <= n; ++i)
        cin >> a[i].x >> a[i].y;
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; ++i)
        sum[i] = sum[i - 1] + a[i].y;
    int r = 1;
    for (int l = 1; l <= n; ++l)
    {
        while (r <= n && a[r].x - a[l].x < d)
        {
            ans = max(ans, sum[r] - sum[l - 1]);
            r++;
        }
    }
    cout << ans;
}