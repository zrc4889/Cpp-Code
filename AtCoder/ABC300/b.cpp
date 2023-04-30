#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;
int a[_], b[_];

int main()
{
    // start here..

    int n, m;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            char c;
            cin >> c;
            if (c == '#')
                a[i]++;
        }
    }

    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            char c;
            cin >> c;
            if (c == '#')
                b[i]++;
        }
    }

    sort(a + 1, a + 1 + n);
    sort(b + 1, b + 1 + n);

    for (int i = 1; i <= n; ++i)
    {
        if (a[i] != b[i])
            return cout << "No" << endl, 0;
    }
    return cout << "Yes" << endl, 0;
}