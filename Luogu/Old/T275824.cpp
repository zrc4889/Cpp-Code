#include <bits/stdc++.h>
using namespace std;
const int _ = 5e3 + 10;
const int INF = 1 << 30; // 2 30 次方
int a[_];
int s[_];
int n, q;
const int _1 = 2e5;
int f[_1][_1];
void __init()
{
    memset(0, s, sizeof s);
    for (int i = 2; i <= n; i++)
        s[i] *= s[i - 1];
}
int solve(int l, int r)
{
    __init();
    for (int len = 2; len <= n; len++) // 枚举区间长度
    {
        for (int i = l; i + len - 1 <= r; i++)
        {
            int l = i,
        }
    }
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (q--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int t1, t2;
            cin >> t1 >> t2;
            a[t1] = t2;
        }
        if (op == 2)
        { // 此时求区间最大乘积
            int l, r;
            cin >> l >> r;
            solve(l, r);
        }
    }
    return 0;
}