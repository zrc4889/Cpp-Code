#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 10;
struct node
{
    int x, y, val;
} edge[_];
int n, m;
int fa[_];
int ans, cnt;
bool cmp(node a, node b)
{
    return a.val < b.val;
}
int find(int x)
{
    while (fa[x] != x)
    {
        x = fa[x] = fa[fa[x]];
    }
    return x;
}
void kruskal()
{

    for (int i = 1; i <= m; i++)
    {
        int fx = find(edge[i].x);
        int fy = find(edge[i].y);
        if (fx == fy)
        {
            continue; // 闭环
        }
        else
        {
            fa[fx] = fy;
            cnt++;
            ans += edge[i].val;
        }
        if (cnt == n - 1)
        {
            cout << ans << endl;
            return;
        }
    }
    cout << "orz" << endl;
}
void init()
{
    for (int i = 1; i <= n; i++)
        fa[i] = i;
}
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> edge[i].x >> edge[i].y >> edge[i].val;
    sort(edge + 1, edge + 1 + m, cmp);
    // 并查集未初始化
    init();
    kruskal();
    return 0;
}
