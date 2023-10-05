#include <bits/stdc++.h>
using namespace std;

// what a shit code!!!!!!!!!

const int _ = 101;

int n, m;
int p[_], c[_], f[_][_];

int main()
{
    // start here..

    cin >> n >> m;
    
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i] >> c[i];
        for (int j = 1; j <= c[i]; ++j)
            cin >> f[i][j];
    }

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
        {

            if (!(p[i] >= p[j])) continue;

            for (int i = 1; i <)

            else if (p[i] > p[j])
            {
                bool flag1;
                for (int k = 1; k <= c[i]; ++k)
                {
                    flag1 = 0;
                    for (int l = 1; l <= c[j]; ++j)
                        if (f[i][k] == f[j][l])
                            flag1 = 1;
                    if (flag1 == 0)
                        break;
                }
                if (flag1 == 0) continue;
            }
        }

    return 0;
}