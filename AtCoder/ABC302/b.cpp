#include <bits/stdc++.h>
using namespace std;

const int _ = 101;

int n, m;
string str = "snuke";
char a[_][_];
queue<pair<int, int>> q;

void clear()
{
    while (!q.empty())
        q.pop();
    return;
}

void check()
{
    if (q.size() != 5)
        return;
    while (!q.empty())
    {
        auto p = q.front();
        q.pop();
        cout << p.first << ' ' << p.second << endl;
    }
    exit(0);
}
void dfs(int x, int y)
{
    int id;
    id = 0;
    // 向东
    for (int i = x; i <= min(x + 5, n); ++i)
    {
        if (a[i][y] != str[id++])
        {
            clear();
            break;
        }
        q.push(make_pair(i, y));
    }
    check();
    id = 0;
    // 向西
    for (int i = x; i > max(x - 5, 0); --i)
    {
        if (a[i][y] != str[id++])
        {
            clear();
            break;
        }
        q.push(make_pair(i, y));
    }
    check();
    id = 0;
    // 向北
    for (int i = y; i > max(y - 5, 0); --i)
    {
        if (a[x][i] != str[id++])
        {
            clear();
            break;
        }
        q.push(make_pair(x, i));
    }
    check();
    id = 0;
    // 向南
    for (int i = y; i <= min(y + 5, m); ++i)
    {
        if (a[x][i] != str[id++])
        {
            clear();
            break;
        }
        q.push(make_pair(x, i));
    }
    check();

    id = 0;

    // 向东北
    for (int i = x, j = y; i <= min(x + 5, n), j > max(y - 5, 0); ++i, --j)
    {
        if (a[i][j] != str[id++])
        {
            clear();
            break;
        }
        q.push(make_pair(i, j));
    }
    check();

    id = 0;
    // 向西北
    for (int i = x, j = y; i > max(x - 5, 0), j > max(y - 5, 0); --i, --j)
    {
        if (a[i][j] != str[id++])
        {
            clear();
            break;
        }
        q.push(make_pair(i, j));
    }
    check();

    id = 0;
    // 向东南
    for (int i = x, j = y; i <= min(x + 5, n), j <= min(y + 5, m); ++i, ++j)
    {
        if (a[i][j] != str[id++])
        {
            clear();
            break;
        }
        q.push(make_pair(i, j));
    }
    check();

    id = 0;
    // 向西南
    for (int i = x, j = y; i > max(x - 5, 0), j <= min(y + 5, m); --i, ++j)
    {
        if (a[i][j] != str[id++])
        {
            clear();
            break;
        }
        q.push(make_pair(i, j));
    }
    check();

    return;
}

int main()
{
    // start here..

    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> a[i][j];

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
        {
            if (a[i][j] == str[0])
            {
                dfs(i, j);
            }
        }

    return 0;
}