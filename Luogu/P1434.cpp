#include <bits/stdc++.h>
using namespace std;
const int _ = 1e4;

struct NODE
{
    int x, y, num;
    // 每一个点
};
struct cmp1
{
    bool operator()(NODE x, NODE y)
    {
        return x.num > y.num;
    }
};

// 优先队列优化
priority_queue<NODE, vector<NODE>, cmp1> q;
int n, m;
int maxn = -1;
int graph[110][110], f[110][110];
// 存图 + dp数组

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            f[i][j] = 1;
            cin >> graph[i][j];
            q.push({i, j, graph[i][j]});
        }
    }
    while (!q.empty())
    {
        NODE t = q.top();
        int i = t.x, j = t.y;
        int curn = t.num;
        q.pop();
        // 遍历
        if (graph[i - 1][j] < curn)
            f[i][j] = max(f[i][j], f[i - 1][j] + 1);
        if (graph[i][j - 1] < curn)
            f[i][j] = max(f[i][j], f[i][j - 1] + 1);
        if (graph[i + 1][j] < curn)
            f[i][j] = max(f[i][j], f[i + 1][j] + 1);
        if (graph[i][j + 1] < curn)
            f[i][j] = max(f[i][j], f[i][j + 1] + 1);
        maxn = max(maxn, f[i][j]);
    }
    cout << maxn << endl;
    return 0;
}