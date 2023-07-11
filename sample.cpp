#include <bits/stdc++.h>
#define ls(cur) (cur * 2)
#define rs(cur) (cur * 2 + 1)
using namespace std;

const int _ = 114514;
int tree[_ << 2];
int a[_], tag[_ << 2];
int n;

void pushup(int cur)
{
    tree[cur] = tree[ls(cur)] + tree[rs(cur)];
    return;
}

void build(int cur, int l, int r)
{
    if (l == r)
    {
        tree[cur] = a[l];
        return;
    }
    int mid = l + r >> 1;
    build(ls(cur), l, mid);
    build(rs(cur), mid + 1, r);

    pushup(cur);
    return;
}

void update(int cur, int l, int r, int id, int val)
{
    if (l == r)
    {
        tree[cur] = val;
        return;
    }

    int mid = l + (r - l) / 2;
    if (id <= mid)
        update(ls(cur), l, mid, id, val);
    else
        update(rs(cur), mid + 1, r, id, val);

    pushup(cur);
    return;
}

int query(int cur, int l, int r, int L, int R)
{
    if (L <= l && r <= R)
        return tree[cur];

    int mid = l + (r - l) / 2;
    int ans = 0;

    if (L <= mid)
        ans += query(ls(cur), l, mid, L, R);
    if (R > mid)
        ans += query(rs(cur), mid + 1, r, L, R);

    return ans;
}

void lazydown(int cur)
{
    if (tag[cur])
    {
        tag[ls(cur)] = tag[cur];
        tag[rs(cur)] = tag[cur];

        tag[cur] = 0;
    }
    return;
}
void update2(int cur, int l, int r, int L, int R, int val)
{
    if (L <= l && r <= R)
    {
        tag[cur] = val;
        tree[cur] = val * (r - l + 1);
    }

    lazydown(cur);
    int mid = l + (r - l) / 2;
    if (L <= mid)
        update2(ls(cur), l, mid, L, R, val);
    if (R > mid)
        update2(rs(cur), mid + 1, r, L, R, val);

    pushup(cur);
    return;
}

int main()
{
    // start here..

    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    build(1, 1, n);

    cout << query(1, 1, n, 1, n);

    update(1, 1, n, 4, 10);

    cout << query(1, 1, n, 1, n) << endl;
    
    update2(1, 1, n, 1, 3, 10);

    cout << query(1, 1, n, 1, n);

    return 0;
}