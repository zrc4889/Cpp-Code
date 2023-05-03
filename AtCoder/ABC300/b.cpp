#include <bits/stdc++.h>
using namespace std;

const int _ = 31;
int n, m;
char a[_][_], b[_][_];
char t[_];

void left_bound()
{
    memset(t, 0, sizeof t);
    for (int j = 1; j <= m; ++j)
        t[j] = a[1][j];
    for (int i = 1; i < n; ++i)
        for (int j = 1; j <= m; ++j)
            a[i][j] = a[i + 1][j];
    for (int j = 1; j <= m; ++j)
        a[n][j] = t[j];
    return;
}

void up_bound()
{
    memset(t, 0, sizeof t);
    for (int i = 1; i <= n; ++i)
        t[i] = a[i][1];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j < m; ++j)
            a[i][j] = a[i][j + 1];
    for (int i = 1; i <= n; ++i)
        a[i][m] = t[i];
    return;
}

bool judge()
{
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (a[i][j] != b[i][j])
                return false;
    return true;
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
            cin >> b[i][j];

    int ans = 0;
    for (int i = 1; i <= n; ++i)
    {
        left_bound();
        for (int j = 1; j <= m; ++j)
        {
            up_bound();
            
            ans |= judge();
        }
    }

    cout << (ans == 1 ? "Yes" : "No") << endl;
    return 0;
}