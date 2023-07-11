#include <bits/stdc++.h>
// #define int __int128
using namespace std;
const int _ = 1e5 + 10;
int a[_];
// bool cmp(int x, int y)
// {
//     return x > y;
// }
signed main()
{
    freopen("sort.in", "r", stdin);
    freopen("sort.out", "w", stdout);
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // 输入完成
    int cnt = 0;
    sort(a + 1, a + 1 + n);
    reverse(a + 1, a + n + 1);
    for (int i = 1; i <= n; ++i)
    {
        cnt += n - i;
        if (cnt >= m)
        {
            int k = cnt - m;
            // cout << k << endl;
            return cout << a[i] * a[n - k], 0;
        }
        // else
        // {
        //     continue;
        // }
    }
    return 0;
}