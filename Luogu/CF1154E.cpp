#include <bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 10;

int n, k;
int q, status = 1, cur, L, R;
int a[_], vis[_], rk[_];

/*
a[_] 原数组
vis[_] 链表/原数组第 i 项是否被删除
rk[_] 第 i 大的数字的**下标**
*/

struct Node
{
    int val, ans, pre, nxt;
} e[_];

struct Node2
{
    int val;
    int id;
} t[_];

bool cmp(Node2 a, Node2 b)
{
    return a.val > b.val;
}

int main()
{
    cin >> n >> k;
    for (int i = 0; i <= _; ++i)
        vis[i] = 1;
    for (int i = 1; i <= n; ++i)
    {
        int tmp;
        cin >> tmp;

        a[i] = tmp;
        t[i].val = tmp;
        t[i].id = i;

        e[i].val = tmp;
        e[i].pre = i - 1, e[i].nxt = i + 1;
    }

    sort(t + 1, t + n + 1, cmp);
    for (int i = 1; i <= n; ++i)
        rk[i] = t[i].id;

    for (int i = 1; i <= n; ++i)
    {
        int pos = rk[i];
        if (vis[pos] == 0)
            continue;
        vis[pos] = 0, e[pos].ans = status;

        q = k, cur = pos;
        while (q && cur > 0)
        {
            cur = e[cur].pre;
            if (vis[cur] == 0)
                continue;
            e[cur].ans = status;
            q--;
            vis[cur] = 0;
        }
        L = cur;

        q = k, cur = pos;
        while (q && cur <= n)
        {
            cur = e[cur].nxt;
            if (vis[cur] == 0)
                continue;
            e[cur].ans = status;
            q--;
            vis[cur] = 0;
        }
        R = cur;

        e[L].nxt = R, e[R].pre = L;

        status ^= 3;
    }

    for (int i = 1; i <= n; ++i)
        cout << e[i].ans;
    cout << '\n';

    return 0;
}
