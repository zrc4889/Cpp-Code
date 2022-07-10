#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6 + 10;
int a[N];
int n, m;
bool check(int x)
{
    int sum = 0;
    for (int i = 1; i <= n; ++i)f
    {
        if (x < a[i])
        {
            sum += a[i] - x; // 砍了
        }
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
        int mid = l + (r - l) / 2;
        if (check(mid))
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << l - 1;
    return 0;
}