#include <bits/stdc++.h>
using namespace std;
// 基础模板写好
const int _ = 5e5 + 10;
int lowbit(int x) { return x & (-x); }
int a[_];
int n, m;
struct TREE
{
    int t[_];
    void add(int x, int d)
    {
        // 在 x 处增加 d
        // a[x] += d;
        for (int i = x; i <= n; i += lowbit(i))
            t[i] += d;
        return;
    }
    int sum(int x)
    {
        int ans = 0;
        for (int i = x; i > 0; i -= lowbit(i))
            ans += t[i];
        return ans;
    }
    void init()
    {
        memset(t, 0, sizeof t);
        for (int i = 1; i <= n; i++)
            for (int j = i - lowbit(i) + 1; j <= i; j++)
                t[i] += a[j];
        return;
    }
} tree;
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    // tree.init(); 为什么把这里初始化改掉就 AC 了？
    while (m--)
    {
        int op, x, y, k;
        cin >> op;
        if (op == 1)
        {
            cin >> x >> y >> k;
            tree.add(x, k);
            tree.add(y + 1, -k);
        }
        else if (op == 2)
        {
            cin >> x;
            cout << a[x] + tree.sum(x) << endl;
        }
    }

    return 0;
}