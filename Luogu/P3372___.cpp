#include <bits/stdc++.h>
using namespace std;
#define int long long
const int _ = 1000000;
int n, m;
int a[_];
int ans[_ << 2], tag[_ << 2];
// 抄一遍
inline int ls(int x) { return x << 1; }
inline int rs(int x) { return x << 1 | 1; }
inline void push_up(int p) { ans[p] = ans[ls(p)] + ans[rs(p)]; }

void f(int p, int l, int r, int k)
{
    // 懒标记改变
    tag[p] = tag[p] + k;
    ans[p] = ans[p] + k * (r - l + 1);
}

void push_down(int p, int l, int r)

{
    int mid = l + r >> 1;
    f(ls(p), l, mid, tag[p]);
    f(rs(p), mid + 1, r, tag[p]);
    tag[p] = 0;
}
void build(int p, int l, int r)
{
    tag[p] = 0;
    if (l == r)
    {
        ans[p] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(ls(p), l, mid);
    build(rs(p), mid + 1, r);
    push_up(p);
}
void update(int nl, int nr, int l, int r, int p, int k)
{
    if (nl <= l && r <= nr)
    {
        f(p, l, r, k);
        return;
    }
    push_down(p, l, r);
    int mid = l + r >> 1;
    if (nl <= mid)
        update(nl, nr, l, mid, ls(p), k);
    if (nr > mid)
        update(nl, nr, mid + 1, r, rs(p), k);
    push_up(p);
}
int query(int nl, int nr, int l, int r, int p)
{
    int res = 0;
    if (nl <= l && r <= nr)
        return ans[p];
    int mid = l + r >> 1;
    push_down(p, l, r);
    if (nl <= mid)
        res += query(nl, nr, l, mid, ls(p));
    if (nr > mid)
        res += query(nl, nr, mid + 1, r, rs(p));
    return res;
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(1, 1, n);
    while (m--)
    {
        int op, x, y, k;
        cin >> op;
        if (op == 1)
        {
            cin >> x >> y >> k;
            update(x, y, 1, n, 1, k);
        }
        if (op == 2)
        {
            cin >> x >> y;
            cout << query(x, y, 1, n, 1) << endl;
        }
    }
    return 0;
}