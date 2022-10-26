#include <bits/stdc++.h>
using namespace std;
// TODO: 复习2022年10月26日
const int _ = 5e5 + 10;
int n, m;
int s[_];
int lowbit(int x) { return x & (-x); }
struct Node
{
    int c[_];
    void add(int x, int d)

    {
        s[x] += d; // 注意这边是原数组
        for (int i = x; i <= n; i += lowbit(i))
            c[i] += d;
    }
    int sum(int x)
    {
        int ans = 0;
        for (int i = x; i > 0; i -= lowbit(x))
            ans += c[i];
        return ans;
    }
    void init()
    {
        memset(c, 0, sizeof c);
        for (int i = 1; i <= n; i++)
            for (int j = i - lowbit(i) + 1; j <= i; j++)
                c[i] += s[j];
    }
} a;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
            cin >>
        n >> m;
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