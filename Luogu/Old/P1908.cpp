#include <bits/stdc++.h>
#define int long long
using namespace std;

// P1908 逆序对
const int _ = 1145;
struct Node
{
    int val;
    int num;
} a[_];
int tree[_];
int b[_] = {0};
int n;

int lowbit(int k) { return k & (-k); }
bool cmp1(Node q, Node w)
{
    if (q.val == w.val)
        return q.num < w.num;
    return q.val < w.val;
}

void add(int x)
{
    for (int i = x; i <= n; i += lowbit(i))
        tree[i] += 1;
    // 不符合
}

signed sum(int x)
{
    int res = 0;
    for (int i = x; i > 0; i -= lowbit(i))
        res += tree[i];
    return res;
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].val;
        a[i].num = i;
    }

    sort(a + 1, a + 1 + n, cmp1);
    int ans = 0;

    for (int i = 1; i <= n; i++)
        b[a[i].num] = i;
    // 离散化：排序完之后将新编号保存在 b 中

    for (int i = 1; i <= n; i++)
    {
        // 树状数组操作
        add(b[i]);
        // 单点修改加入
        // cout << sum(b[i]) << endl;
        ans += i - sum(b[i]);
        // cout << ans << endl;
        // 结果加上 i 减去 0~b_i 和
    }

    cout << ans << endl;

    return 0;
}