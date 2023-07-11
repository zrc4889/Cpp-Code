#include <bits/stdc++.h>
using namespace std;
const int _ = 1005;
int cnt[_];
struct HP
{
    int s;
    int g;
    int i;
} a[_];
bool cmp(HP x, HP y)
{
    if (x.s == y.s)
    {
        if (x.g == y.g)
        {
            return x.i > y.i;
        }
        return x.g < y.g;
    }
    return x.s > y.s;
}
int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("sort.in", "r", stdin);
    freopen("sort.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i].s;
        cin >> a[i].g;
        a[i].i = i;
    }
    sort(a + 1, a + 1 + n, cmp);
    int ans = 0;
    // int last = a[1].g;
    cnt[1] = 0;
    // 第一个肯定没有比他低的
    cout << cnt[1] << endl;
    for (int i = 2; i <= n; ++i)
    {
        // 先不考虑重复的情况
        // if (a[i].g < a[i - 1].g)
        // {
        //     cnt[i] = cnt[i - 1] + 1;
        // }
        // cout << cnt[i]
        ans = 0;
        for (int j = 1; j <= i; ++j)
        {
            if (a[j].g < a[i].g)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}