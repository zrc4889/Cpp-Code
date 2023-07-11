#include <bits/stdc++.h>
using namespace std;
const int _ = 5e5 + 10;
int a[_];
int n, m;
int lowbit(int x) { return x & (-x); }

struct TREE
{
    int t[_];
    void init()
    {
        memset(t, 0, sizeof t);
        for (int i = 1; i <= n; i++)
        {
            for (int j = i - lowbit(i) + 1; j <= i; j++)
            {
                t[i] += a[j];
            }
        }
    }
    void add(int x, int d)
    {
        a[d] += x;
        for (int i = d; i <= n; i += lowbit(i))
        {
            t[i] += x;
        }
    }
    int sum(int x)
    {
        int res = 0;
        for (int i = x; i > 0; i -= lowbit(i))
        {
            res += t[i];
        }
        return res;
    }
} tree;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >>
        n >> m; 
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    tree.init();
    for (int i = 1; i <= m; i++)
    {
        int b, x, y;
        cin >> b >> x >> y;
        if (b == 1)
            tree.add(y, x);
        else
            cout << tree.sum(y) - tree.sum(x - 1) << endl;
    }
    return 0;
}