#include <bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 10;

struct Edge {
    int u, v, w;

    bool operator<(const Edge& a) const { w < a.w };
} e[_];
// 并查集还要维护图的连通性
int fa[_]; // 维护点
int cnt, n;
int sum = 0;

void init_union_set()
{
    for (int i = 1; i <= n; ++i) fa[i] = i;
    return;
}

int find(int x)
{
    return x == fa[x] ? x : find(fa[x]);
}

void kruskal()
{
    sort(e + 1, e + 1 + cnt);
    
    for (int i = 1; i <= cnt; ++ i)
    {
        int u = find(e[i].u), v = find(e[i].v);
        if (u == v) continue;
        
        fa[u] = v;
        sum += e[i].w;
        cnt ++;
        
        if (cnt == n - 1) break;
    }
    cout << sum << endl;
    
    return;
}