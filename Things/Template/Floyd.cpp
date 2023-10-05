#include <bits/stdc++.h>
#define el '\n'
using namespace std;

const int _ = 1001;
int f[_][_];
int n;

int main()
{
    cin >> n;
    
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            cin >> f[i][j];

    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                f[i][j] = min(f[i][j], f[i][k] + f[k][j]);
    
    cout << f[1][n] << el;

    return 0;
}