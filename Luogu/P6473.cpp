#include <bits/stdc++.h>
#define int long long
using namespace std;
const int L = 2e5 + 10;
int a[L], sum[L];
bool cmp(int x, int b)
{
    return x > b;
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
        else if (sum[n] <= t * v)
            cout << -1 << endl; // 施尽所有魔法
        else
        {
            //开始二分
            int l = 1, r = n;
            while (l + 1 < r)
            {
                int mid = (l + r) >> 1; // /2
                if (sum[mid] > t * v)
                {
                    // ans = mid;
                    r = mid;
                }
                else
                    l = mid;
            }
            if (sum[l] > t * v)
                cout << l;
            else if (sum[r] > t * v)
                cout << r;
            else
                cout << -1;
            cout << endl;

            // cout << ans << endl;
        }
    }
    return 0;
}
