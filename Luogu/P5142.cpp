#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 1e6 + 10;
const int p = 1e9 + 7;

int n, m, a[_];

int qpow(int a, int n)
{
    int ans = 1;
    while (n)
    {
        if (n & 1)
            ans = (ans * a) % p;
        a = (a * a) % p;
        n >>= 1;
    }
    return (ans % p + p) % p;
}

class BIT1
{
public:
    int size;
    int s[_];

    int lowbit(int x)
    {
        return x & (-x);
    }

    void init()
    {
        size = n;
        memset(s, 0, sizeof s);
        for (int i = 1; i <= n; ++i)
        {
            s[i] = s[i] + a[i] % p;
            int j = i + lowbit(i);
            if (j <= n)
                s[j] = (s[j] + s[i]) % p;
        }
    }

    void update(int id, int val)
    {
        for (int i = id; i <= n; i += lowbit(i))
            s[i] = (s[i] + val) % p;
        return;
    }

    int presum(int id)
    {
        int ans = 0;
        for (int i = id; i; i -= lowbit(i))
            ans = (ans + s[i]) % p;
        return ans % p;
    }

    int getsum(int l, int r)
    {
        return presum(r) - presum(l - 1);
    }
};

class BIT2
{
public:
    int size;
    int s[_];

    int lowbit(int x)
    {
        return x & (-x);
    }

    void init()
    {
        size = n;
        memset(s, 0, sizeof s);
        for (int i = 1; i <= n; ++i)
        {
            s[i] = s[i] + (a[i] * a[i]) % p;
            int j = i + lowbit(i);
            if (j <= n)
                s[j] = (s[j] + s[i]) % p;
        }
    }

    void update(int id, int val)
    {
        for (int i = id; i <= n; i += lowbit(i))
            s[i] = (s[i] + val * val) % p;
        return;
    }

    int presum(int id)
    {
        int ans = 0;
        for (int i = id; i; i -= lowbit(i))
            ans = (ans + s[i]) % p;
        return ans % p;
    }

    int getsum(int l, int r)
    {
        return presum(r) - presum(l - 1);
    }
};

BIT1 tree1;
BIT2 tree2;

void sigema(int l, int r)
{
    int s1, s2, inv, ave, ans;
    s1 = tree1.getsum(l, r) % p;
    s2 = tree2.getsum(l, r) % p;
    inv = qpow(r - l + 1, p - 2);
    ave = (int)s1 * inv % p;
    ans = (int)s2 * inv % p - (int)ave * ave % p;
    ans = (ans % p + p) % p;
    cout << ans << '\n'; 
}

signed main()
{
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    tree1.init();
    tree2.init();

    while (m--)
    {
        int op;
        cin >> op;
        if (op == 1)
        {
            int id, val;
            cin >> id >> val;
            tree1.update(id, val);
            tree2.update(id, val);
        }
        if (op == 2)
        {
            int l, r;
            cin >> l >> r;
            sigema(l, r);
        }
    }

    return 0;
}