#include <bits/stdc++.h>
using namespace std;
const int _ = 5e5 + 10;
int n, m;
int a[_];
int lowbit(int x) { return x & (-x); }
struct TREE
{
    int s[_]; // 树状数组总数组
    void init()
    {
        // 先写init
        memset(s, 0, sizeof(s));
        for (int i = 1; i <= n; i++)
            for (int j = i - lowbit(i) + 1; j <= i; j++)
                s[i] = s[i] + a[j];
        return;
    }
    void add(int x, int d)
    {
        a[x] += d;
        for (int i = x; i <= n; i += lowbit(i))
            s[i] += d;
    }
    int sum(int x)
    {
        int ans = 0;
        for (int i = x; i > 0; i -= lowbit(i))
            ans += s[i];
        return ans;
    }

} tree;

signed main()
{
#ifdef LOCAL

    LOCALfo
#endif
            cin >>
        n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    tree.init();
    while (m--)
    {
        int op, x, y;
        cin >> op >> x >> y;
        if (op == 1)
        {
            tree.add(x, y);
        }
        else if (op == 2)
        {
            // 后面减前面
            cout << tree.sum(y) - tree.sum(x - 1) << endl;
        }
    }
    return 0;
}