#include <bits/stdc++.h>
// #define int long long
using namespace std;

const int mod = 1e9 + 9;
const int _ = 3e6 + 10;
int fa[_];

int find(int x)
{
    return fa[x] == x ? fa[x] : find(fa[x]);
}

signed main()
{
    // start here..

    int n, m;
    // cin >> n >> m;
    scanf("%d%d", &n, &m);

    for (int i = 0; i <= n; ++i)
        fa[i] = i;

    int ans = 0;

    while (m--)
    {
        int a, b;
        scanf("%d%d", &a, &b);

        int ra = find(a), rb = find(b);

        // 存在连通
        if (ra == rb)
        {
            ans = (ans * 2 + 1) % mod;
        }

        if (ra != rb)
            fa[ra] = rb;

        printf("%d\n", ans);
    }

    return 0;
}