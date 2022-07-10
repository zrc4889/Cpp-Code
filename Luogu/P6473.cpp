#include <bits/stdc++.h>
#define int long long
using namespace std;
bool cmp(int a, int b)
{
    return a > b;
}
signed main()
{
    int n, l, v, q;
    cin >> n >> l >> v;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, cmp);
    sum[0] = l; // 前缀和
    for (int i = 1; i <= n; ++i)
        sum[i] = sum[i - 1] + a[i];
    cin >> q;
    int t;
    for (int i = 1; i <= q; ++i)
    {
        cin >> t;
        if (sum[0] > v * t)
            cout << 0 << endl;
        else if (sum[n] <= t*v)
            cout << -1 << endl; // 施尽所有魔法
        else{
            //开始二分
            if ()
        }
    }
    return 0;
}
