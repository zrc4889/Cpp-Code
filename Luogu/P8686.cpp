#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 1;
int fa[_];
int vis[_];
int find(int x)
{
    return fa[x] == x ? x : (fa[x] = find(fa[x]));
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    // init(); // init
    int n;
    cin >> n;
    // 在这道题中，fa[x] 表示在 x 这条序列中，最大的值
    memset(vis, 0, sizeof vis);
    for (int i = 1; i <= n; i++)
        fa[i] = i;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        // vis 是一个桶数组
        if (vis[x])
            x = find(x) + 1; // 找到它的根节点加一
        cout << x << ' ';
        vis[x] = 1; // 认定它出现过

        if (vis[x - 1] && x != 1) 
            fa[x - 1] = x; // 他-1的父亲一定是它本身
        if (vis[x + 1]) // 此时无需考虑边界
            fa[x] = x + 1; // 他的父亲一定是他+1

    }
    return 0;
}