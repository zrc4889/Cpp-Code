#include <bits/stdc++.h>
#define int long long 

using namespace std;

priority_queue<int> q;
// STL 是个好东西

signed main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        int a;
        cin >> a;
        q.push(a);
    }

    for (int i = 1; i <= m; i++)
    {
        int t;
        t = q.top();
        q.pop();
        t /= 2;
        q.push(t);
    }

    int ans = 0;
    while (!q.empty())
    {
        ans += q.top();
        q.pop();
    }

    cout << ans << endl;

    return 0;
}