#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 5;
int head[_];
int to[2 * _], nxt[2 * _];
int degree[_];
int num, n;
void add(int u, int v)
{
    nxt[++num] = head[u];
    head[u] = num;
    to[num] = v;
    return;
}
int func(int x)
{
    for (int i = 0;; i++)
        if ((1 << i) >= x)
            return i;
    // 2 ^ i
}
int dfs(int x, int f)
{
    int y = 0;
    if (!f)
        y += func(degree[x] + 1);
    else
        y += func(degree[x]);
    for (int i = head[x]; i; i = nxt[i])
        if (to[i] != f)
            y += dfs(to[i], x) + 1;
    return y;
}

int main()
{
    freopen("message.in", "r", stdin);
    freopen("message.out", "w", stdout);

    cin >> n;
    for (int i = 1; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        degree[x]++, degree[y]++;
        add(x, y), add(y, x);
    }
    cout << dfs(1, 0);
}