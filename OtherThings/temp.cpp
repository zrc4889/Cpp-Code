#include <bits/stdc++.h>
using namespace std;

const int _ = 2001;

int a[_];

void init(int n)
{
    for (int i = 1; i < n; ++i)
    {
        a[i] += a[i];
        a[i + 1] -= a[i];
    }
}
void setted(int l, int r, int x)
{
    a[l] += x, a[r + 1] -= x;
}
int find(int p)
{
    int res = 0;
    for (int i = 1; i <= p; ++i)
        res += a[i];
    return res;
}

int main()
{
    // start here..

    freopen("dream.in", "r", stdin);
    freopen("dream.out", "w", stdout);

    int n, q;
    cin >> n >> q;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    init(n);

    while (q--)
    {
        char op;
        cin >> op;
        if (op == 'A')
        {
            int l, r, x;
            cin >> l >> r >> x; // 简单的一个差分
            setted(l, r, x);
        }
        if (op == 'J')
        {
            int p;
            cin >> p;
            cout << find(p) << endl;
        }
    }

    return 0;
}