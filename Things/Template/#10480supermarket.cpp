#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;
pair<int, int> p[_];
int f[_];
int n;

int find(int x)
{
    return f[x] == x ? f[x] : find(f[x]);
}

void solve()
{
    int d = 0, ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i].first >> p[i].second;
        d = max(d, p[i].second);
    }

    for (int i = 0; i <= d; ++i) f[i] = i; // 并查集初始化

    sort(p + 1, p + n + 1);

    for (int i = n; i >= 1; --i)
    {
        int x = find(p[i].second);
        if (x > 0)
        {
            ans += p[i].first;
            f[x] = x - 1;
        }
    }

    cout << ans << endl;
}

int main()
{
    // start here..
    while (cin >> n) solve();
    return 0;
}