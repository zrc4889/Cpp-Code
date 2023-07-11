#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int x, y;
    // int rank;
} a[100];

int g[10][10];

int q[10][10] =
    {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 6, 6, 6, 6, 6, 6, 6, 6, 6},
        {0, 6, 7, 7, 7, 7, 7, 7, 7, 6},
        {0, 6, 7, 8, 8, 8, 8, 8, 7, 6},
        {0, 6, 7, 8, 9, 9, 9, 8, 7, 6},
        {0, 6, 7, 8, 9, 10, 9, 8, 7, 6},
        {0, 6, 7, 8, 9, 9, 9, 8, 7, 6},
        {0, 6, 7, 8, 8, 8, 8, 8, 7, 6},
        {0, 6, 7, 7, 7, 7, 7, 7, 7, 6},
        {0, 6, 6, 6, 6, 6, 6, 6, 6, 6},
};
int w[10][10] = {
    {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    {0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
    {0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
    {0, 1, 1, 1, 2, 2, 2, 3, 3, 3},
    {0, 4, 4, 4, 5, 5, 5, 5, 5, 5},
    {0, 4, 4, 4, 5, 5, 5, 5, 5, 5},
    {0, 4, 4, 4, 5, 5, 5, 5, 5, 5},
    {0, 6, 6, 6, 7, 7, 7, 8, 8, 8},
    {0, 6, 6, 6, 7, 7, 7, 8, 8, 8},
    {0, 6, 6, 6, 7, 7, 7, 8, 8, 8},
};

bool r[10][10], c[10][10], t[10][10]; // 类似于八皇后问题

int tot, ans;
// int n, m;

int get(int x, int y)
{
    return w[x][y];
}

int calc()
{
    int sum = 0;
    for (int i = 1; i <= 9; ++i)
        for (int j = 1; j <= 9; ++j)
        {
            sum += q[i][j] * g[i][j];
        }
    return sum;
}

void dfs(int p)
{
    if (p > tot)
    {
        ans = max(ans, calc());
    }

    int x = a[p].x;
    int y = a[p].y;

    for (int i = 1; i <= 9; ++i)
    {
        if (!r[x][i] && !c[x][i] && !t[get(x, y)][i])
        {
            r[x][i] = true;
            c[x][i] = true;
            t[get(x, y)][i] = true;

            g[x][y] = i;
            dfs(p + 1);

            r[x][i] = false;
            c[x][i] = false;
            t[(get(x, y))][i] = false;
        }
    }
}

int main()
{
    // start here..

    tot = 0;
    for (int i = 1; i <= 9; ++i)
        for (int j = 1; j <= 9; ++j)
        {
            int m;
            cin >> m;

            if (m == 0)
            {
                tot++;
                a[tot].x = i;
                a[tot].y = j;
            }
            else
            {
                r[i][m] = true;
                c[i][m] = true;
                t[get(i, j)][m] = true;
            }
        }
    ans = -1;
    dfs(1);
    cout << ans << endl;
    return 0;
}