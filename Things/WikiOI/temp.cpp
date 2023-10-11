#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 1e6 + 10;
stack<int> s;
int ll[_], rr[_], sum[_], a[_], n;

signed main()
{
    // start here..

    a[0] = a[n + 1] = -1e18;

    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum[i] = sum[i - 1] + a[i];
    }

    while (!s.empty()) s.pop();
    for (int i = 1; i <= n + 1; ++i)
    {
        while (!s.empty() && a[s.top()] > a[i])
        {
            rr[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }   

    while(!s.empty()) s.pop();
    for (int i = n; i >= 0; --i)
    {
        while (!s.empty() && a[s.top()] > a[i])
        {
            ll[s.top()] = i;
            s.pop();
        }
        s.push(i);
    }
    
    int ans = -1;
    for (int i = 1; i <= n; ++i)
        ans = max(ans, (sum[rr[i] - 1] - sum[ll[i]]) * a[i]);

    cout << ans << endl;
    return 0;
}