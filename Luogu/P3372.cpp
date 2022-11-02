#include <bits/stdc++.h>
using namespace std;
const int _ = 1000000;
#define int long long
int n, m;
int a[_];
int ans[_ << 2], tag[_ << 2];
inline int ls(int x) { return x << 1; }                          // 左子树
inline int rs(int x) { return x << 1 | 1; }                      // 右子树
inline void push_up(int p) { ans[p] = ans[ls(p)] + ans[rs(p)]; } // 更新结点的值

void f(int p, int l, int r, int k)
// 懒标记改变节点
{
    tag[p] = tag[p] + k;               // 懒标记更新
    ans[p] = ans[p] + k * (r - l + 1); // 区间统一改变，ans 加上元素个数乘加上的值
}
void push_down(int p, int l, int r)
// 向下传递懒标记
{
    int mid = l + (r - l) / 2;    // 取中间值
    f(ls(p), l, mid, tag[p]);     // 递归左子树
    f(rs(p), mid + 1, r, tag[p]); // 递归右子树
    tag[p] = 0;                   // 懒标记已经传走了，该节点的标记记为 0
}
void build(int p, int l, int r)
{
    // 建树
    tag[p] = 0; // 懒标记首先为 0
    if (l == r)
    {
        // 如果找到了非区间，即单个元素的节点，就赋值
        ans[p] = a[l];
        return;
    }
    int mid = l + (r - l) / 2; // 取中间值
    build(ls(p), l, mid);      // 建立左子树
    build(rs(p), mid + 1, r);  // 建立右子树
    push_up(p);                // 更新结点的值
}
void update(int nl, int nr, int l, int r, int p, int k)
{
    // 区间加和函数
    if (nl <= l && r <= nr)
    {
        // 刚好区间被完全包含
        f(p, l, r, k); // 统一更新区间加和
        return;
    }
    push_down(p, l, r);                       // 向下传递懒标记
    int mid = l + (r - l) / 2;                // 取中间值
    if (nl <= mid)                            // 如果左区间被包含
        update(nl, nr, l, mid, ls(p), k);     // 遍历左子树
    if (nr > mid)                             // 如果右区间被包含
        update(nl, nr, mid + 1, r, rs(p), k); // 遍历右子树
    push_up(p);                               // 更新结点的值
}
int query(int q_x, int q_y, int l, int r, int p)
{
    // 区间求和
    int res = 0;
    if (q_x <= l && r <= q_y)  // 如果区间被完全包含
        return ans[p];         // 直接返回这个结点的值
    int mid = l + (r - l) / 2; // 取中间值
    push_down(p, l, r);        // 向下传递懒标记
    if (q_x <= mid)
        res += query(q_x, q_y, l, mid, ls(p)); // 加上左子树
    if (q_y > mid)
        res += query(q_x, q_y, mid + 1, r, rs(p)); // 加上右子树
    return res;                                    // 返回和
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