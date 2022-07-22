#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e5 + 5;
const int maxk = 2e5 + 5;
int n, k;
int a[maxk], b[maxk];
int p[maxn], fa[maxn];
vector<int> G[maxn];
set<int> s[maxn];
int find(int x)
{
    if (x == fa[x])
        return x;
    return fa[x] = find(fa[x]); // 找爹
}
void merge(int x, int y)
{
    int fx = find(x), fy = find(y);
    fa[fx] = fy;
}
int main()
{
    freopen("permutation.in", "r", stdin);
    freopen("permutation.out", "w", stdout);
    cin >> n >> k;
    for (int i = 1; i <= k; ++i)
        cin >> a[i] >> b[i]; // 下标
    for (int i = 1; i <= n; ++i)
        p[i] = fa[i] = i, G[i].push_back(i);
    for (int i = 1; i <= k; ++i)
    {
        G[p[a[i]]].push_back(b[i]);
        G[p[b[i]]].push_back(a[i]);
        swap(p[a[i]], p[b[i]]);
    }
    for (int i = 1; i <= n; i++)
        merge(i, p[i]); // 连爹
    for (int i = 1; i <= n; ++i)
    {
        int x = find(i); 
       for (int j = 0; j < G[i].size(); ++j)
        {
            s[x].insert(G[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        int x = find(i);
        cout << s[x].size() << endl;
    }
    return 0;
}