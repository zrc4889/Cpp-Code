#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, t, ans = 0;
const int maxn = 1e6 + 10;
int s[maxn];
void solve(int l, int r)
{
    if (l == r)
        return;
    int mid = (l + r) / 2;

    solve(l, mid);
    solve(mid + 1, r);

    sort(s + l, s + mid + 1);
    sort(s + mid + 1, s + r + 1);

    int a = l, b = mid + 1;
    while (a <= mid && b <= r)
    {
        if (s[a] + t <= s[b])
            a++;
        else
        {
            ans += mid - a + 1;
            b++;
        }
    }
}
signed main()
{
    cin >> n >> t;
    int x;
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        s[i] = s[i - 1] + x;
    }
    ans = 0;
    solve(0, n);
    cout << ans;
    return 0;
}