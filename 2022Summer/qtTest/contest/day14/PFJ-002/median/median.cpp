#include <bits/stdc++.h>
using namespace std;
int n, k, pos, cnt;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] == k)
            pos = i;
    }
    cnt = 0;
    f[n + 0]++; // 有可能是一个负数，做一个偏移
    for (int i = pos - 1; i >= 1; --i)
    {
        if (a[i] < k)
            cnt--; // 平衡
        else if (a[i] > k)
            cnt++;
        f[n + cnt]++;
    }
    cnt = 0;
    long long ans = f[n + 0];
    for (int i = pos + 1; i <= n; ++i)
    {
        if (a[i] < k)
            cnt--;
        else if (a[i] > k)
            cnt++;
        ans += f[n - cnt];
    }
    cout << ans;
    return 0;
}