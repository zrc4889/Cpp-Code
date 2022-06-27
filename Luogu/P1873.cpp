#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1000010];
int n, m;
bool check(int x)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (x < a[i]) // 这里应该是树高于
            sum += a[i] - x;
    }
    if (sum >= m)
        return true;
    else
        return false;
}

signed main()
{
    cin >> n >> m;
    int l = 1, r = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        r = max(r, a[i]);
    }
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (check(mid))
        {
            l = mid + 1; // 锯片抬高
        }
        else
        {
            r = mid - 1; // 太高低点
        }
    }
    cout << l - 1; 
    return 0;
}