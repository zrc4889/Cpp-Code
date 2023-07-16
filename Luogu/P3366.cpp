#include <bits/stdc++.h>
using namespace std;
int a, b;
struct node
{
    int x, y, val;
} edge[200005];
int parent[5005];
bool cmp(node a, node b)
{
    return a.val < b.val; // 边权排序
}
int find(int x)
{
    // 一个循环就结束，路径压缩再压缩
    while (parent[x] != x)
        x = parent[x] = parent[parent[x]];
    // 如果一个点的父亲不是他自己，那么讲将他的父亲的父亲设为他的父亲
    return x;
    // return parent[x] == x ? x : (parent[x] = find(x)); MLE 代码
}
void root(int x, int y)
{
    int x_root = find(x);
    int y_root = find(y);
    if (x_root != y_root)
        parent[x_root] = y_root;
    // 合并操作
    return;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m, ans = 0, cnt = 0;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
        cin >> edge[i].x >> edge[i].y >> edge[i].val;
    for (int i = 1; i <= n; i++)
        parent[i] = i; // 一个点的初始父亲是他自己
    sort(edge + 1, edge + m + 1, cmp);
    for (int i = 1; i <= m; i++)
    {
        int x_root = find(edge[i].x);
        int y_root = find(edge[i].y);
        if (x_root == y_root)
            continue;
        else
        {
            parent[x_root] = y_root;
            ans += edge[i].val;
            cnt++;
        }
        if (cnt == n - 1) // 一个连通图的最小生成树点数是 n - 1
        {
            return cout << ans << endl, 0;
        }
    }
    cout << "orz" << endl;
    return 0;
}