#include <bits/stdc++.h>
// #define int long long
using namespace std;
int f[5001][5001][2];
const int mod = 1e9 + 7;
int main()
{
    int n, m;
    cin >> n >> m;
    f[1][1][1] = 1;
    f[1][0][0] = 1;
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j <= i; ++j)
        {
            f[i][j][0] = (f[i - 1][j][0] + f[i - 1][j][1]) % mod;
            f[i][j][1] = (f[i - 1][j][0]) % mod;
            if (j >= 1)
            {
                  f[i][j][1] = (f[i][j][1] + f[i-1][j-1][1]) % mod;
            }
        }
    }
    cout << (f[n][m][1] + f[n][m][0]) % mod;
    return 0;
}