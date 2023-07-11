#include <bits/stdc++.h>
using namespace std;
const int _ = 35;
char a[_][_];
signed main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j] != '.')
            // 首先确保自己不是结构空位
            {

                if (a[i][j] == a[i - 1][j] && a[i][j] == a[i + 1][j])
                    return cout << a[i][j], 0;
                if (a[i][j] == a[i][j + 1] && a[i][j] == a[i][j - 1])
                    return cout << a[i][j], 0;
                if (a[i][j] == a[i - 1][j - 1] && a[i][j] == a[i + 1][j + 1])
                    return cout << a[i][j], 0;
                if (a[i][j] == a[i - 1][j + 1] && a[i][j] == a[i + 1][j - 1])
                    return cout << a[i][j], 0;
            }
        }
    return cout << "ongoing", 0;
}