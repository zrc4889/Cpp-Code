#include <bits/stdc++.h>
using namespace std;

map<int, int> f;

void __union(int x, int y)
{
    f[__find(x)] = __find(y);
}
int __find(int x)
{
    return f[x] == x ? x : f[__find(x)];
}
bool is_union(int x, int y)
{
    return __find(x) == __find(y);
}

int main()
{
    // start here..

    int n, m;
    int p, q;

    cin >> n >> m;
    cin >> p >> q;

    for (int i = -m; i <= n; i++)
    {
        f[i] = i;
    }

    for (int i = 1; i <= p; i++)
    {
        int u, v;
        cin >> u >> v;
        __union(u, v);
    }
    for (int i = 1; i <= q; i++)
    {
        int u, v;
        cin >> u >> v;
        __union(-u, -v);
    }

    

    cout << min(t1, t2) << endl;

    return 0;
}