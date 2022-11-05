#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
int vis[_], a[_];
int n;
void print()
{
    for (int i = 1; i <= n; i++)
    {
        printf("%5d", a[i]);
    }
    cout << endl;
    return;
}
void dfs(int x)
{
    if (x == n)
    {
        print();
        return;
    }
    for (int i = 1; i <= n; i++)
    {
        if (!vis[i])
        {
            vis[i] = 1;
            a[x + 1] = i;
            dfs(x + 1);
            vis[i] = 0;
        }
    }
}

signed main()
{
    cin >> n;
    dfs(0);
    return 0;
}