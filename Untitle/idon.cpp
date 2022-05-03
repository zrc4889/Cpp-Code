#include <bits/stdc++.h>
using namespace std;
long long n, m;
long long h[1000010];
bool check(long long mid)
{
    long long t = 0;
    for (int i = 1; i <= n; i++)
    {
        if (mid < h[i])
            t += h[i] - mid;
    }
    if (t >= m)
        return true;
    else
        return false;
}
int main()
{
    cin >> n >> m;
    long long r = 0, l = 1;
    for (int i = 1; i <= n; i++)
    {
        cin >> h[i];
        r = max(r, h[i]);
    }
    while (l <= r)
    {
        long long mid = (l + r) / 2;
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