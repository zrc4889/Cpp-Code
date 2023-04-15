#include <bits/stdc++.h>
#define int long long
using namespace std;

set<int> s;

int a[114514];

int n, m, p, flag;

void dfs1(int x, int sum)
{
    s.insert(sum);
    if (x > m)
        return;
    dfs1(x + 1, sum), dfs1(x + 1, sum + a[x]);
}

void dfs2(int x, int sum)
{
    if (sum > p)
        return;
    if (s.find(p - sum) != s.end())
    {
        flag = true;
        return;
    }
    if (x > n)
        return;
    if (sum + a[x] > p) return;
    dfs2(x + 1, sum);
    if (flag)
        return;
    dfs2(x + 1, sum + a[x]);
}

signed main()
{
    // start here..

    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    m = n / 2 + 1;

    sort(a + m + 1, a + n + 1);

    dfs1(1, 0);

    int q;
    cin >> q;
    while (q--)
    {
        // int x;
        cin >> p;
        flag = false;
        dfs2(m + 1, 0);
        if (flag)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}