199#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;
int f[_], a[_];
int ind[_];

// 邻接表
vector<int> e[_];

signed main()
{
    // 带权的拓扑排序

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        cin >> a[i];
        int t;
        while (cin >> t && t != 0)
        {
            // 奶牛A挤奶完成是奶牛B开始挤奶的条件
            // A 为依赖，B 为被依赖
            // A -> B

            // 对应到这道题目
            // 一些杂物必须完成后才能开始主任务
            // 杂物为依赖，主任务为被依赖
            // 杂 -> 主
            e[t].push_back(i);
            ind[i]++;
            // ind 入度加一个
        }
    }

    queue<int> q;
    for (int i = 1; i <= n; ++i)
    {
        if (ind[i] == 0)
        {
            q.push(i);
            f[i] = a[i];
            // 没有先行条件，就是自己。
        }
    }

    while (!q.empty())
    {
        int u = q.front();
        q.pop();

        for (auto v : e[u])
        {
            ind[v]--;
            if (ind[v] == 0)
                q.push(v);
            // 这里的f[i]数组存的是完成点i所需的时间，假设i有两个前置条件，这两个条件完成的时间分别为10和20，那么即使时间10的完成了，也得等时间20的完成才能执行i，则i的时间应该是20+完成i本身需要的时间
            f[v] = max(f[v], f[u] + a[v]);
            // 是他自己独立成一个杂务（并发），还是延续。
        }
    }
    // 由于是求所有的线程中最短用时，
    int ans = -1;
    for (int i = 1; i <= n; ++i)
    {
        ans = max(ans, f[i]);
    }
    cout << ans << endl;
    return 0;
    // vCCC 4 个月前补充一下大佬的思路：其实拓扑排序就是为了给dp提供正确的递推顺序，整个题其实是依靠拓扑排序的访问顺序进行递推的动态规划
}