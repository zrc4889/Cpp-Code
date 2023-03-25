#include <bits/stdc++.h>
using namespace std;

const int _ = 1e4 + 1;
int fa[_ * 2];

int find(int x)
{
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

int main()
{
    // start here..
    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n * 2; ++i)
        fa[i] = i;

    for (int i = 1; i <= m; ++i)
    {
        char opt;
        int p, q;
        cin >> opt >> p >> q;
        if (opt == 'F')
            // merge(p, q);
            fa[find(p)] = find(q);
        if (opt == 'E')
            fa[find(p + n)] = find(q), fa[find(q + n)] = find(p);
        // merge(p, q + n), merge(p + n, q);
        // 无需判谎言
    }

    int ans = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (fa[i] == i)
            ans++;
    }

    cout << ans << endl;

    return 0;
}