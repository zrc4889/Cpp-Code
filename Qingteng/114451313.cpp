#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;
int n;
struct Edge
{
    int to, w;
};
vector<Edge> e[_];
int x, len;

void dfs(int u, int f, int sum)
{
    if (sum > len)
        x = u, len = sum;

    for (auto i : e[u])
    {
        int v = i.to;
        int w = i.w;

        if (v == f)
            continue;

        dfs(v, u, sum + w);
    }
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        // 求约数和
        int x = i;
        int y = 1;
        for (int j = 2; j * j <= x; j++)
        {
            if (x % j == 0)
            {
                y += j;
                // 双向
                if (j != x / j)
                    y += (x / j);
            }
        }
        if (y < x)
        {
            e[x].push_back({y, 1}), e[y].push_back({x, 1});
        }
    }
    dfs(1, 0, 0);

    dfs(x, 0, 0);

    cout << len << endl;

    return 0;
}