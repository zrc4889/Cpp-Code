#include <bits/stdc++.h>
using namespace std;
int f[200][200], a[200];
set<string> st;
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    f[0][0] = 1;
    for (int j = 1; j <= n; ++j)
        for (int i = 1; i <= m; ++i)
            for (int k = 0; k <= a[j]; ++k)
                if (i >= k)
                    f[i][j] = (f[i][j] + f[i - k][j - 1]) % 1000007;
    cout << f[m][n] << endl;
    return 0;
}
