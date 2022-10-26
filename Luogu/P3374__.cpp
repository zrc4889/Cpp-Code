#include <bits/stdc++.h>
using namespace std;
const int _ = 5e5 + 10;
int n, m;
int s[_];
int lowbit(int x)
{
    return x & (-x);
}
struct Node
{
    int c[_];
    void add(int x, int d)
    {
        s[x] += d;
        for (int i = x; i <= n; i += lowbit(i))
            c[i] += d;
    }
    int sum(int x)
    {
        int ans = 0;
        for (int i = x; i > 0; i -= lowbit(i))
            ans += c[i];
        return ans;
    }
    void init()
    {
        memset(c, 0, sizeof c);
        for (int i = 1; i <= n; i++)
            for (int j = i - lowbit(i) + 1; j <= i; j++)
                c[i] = c[i] + s[j];
    }
} a;
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> s[i];
    a.init();
    for (int i = 1; i <= m; i++)
    {
        int b, x, y;
        cin >> b >> x >> y;
        if (b == 1)
            a.add(x, y);
        else
            cout << a.sum(y) - a.sum(x - 1) << endl;
    }
    return 0;
}