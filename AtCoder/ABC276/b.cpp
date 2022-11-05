#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;
vector<int> fa[_];

struct Node
{
    int x, y;
} a[_];

bool cmp(Node a, Node b)
{
    if (a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

void __union(int x, int y)
{
    fa[x].push_back(y);
    fa[y].push_back(x);
    return;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++)
    {
        int xa, xb;
        cin >> xa >> xb;
        a[i].x = xa, a[i].y = xb;
    }
    sort(a + 1, a + m + 1, cmp);
    for (int i = 1; i <= m; i++)
    {
        __union(a[i].x, a[i].y);
    }
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        for (auto x : fa[i])
        {
            // cout << x << ' ';
            sum++;
        }
        cout << sum << ' ';
        for (auto x : fa[i])
        {
            cout << x << ' ';
        }
        cout << endl;
    }
    return 0;
}