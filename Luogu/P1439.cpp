#include <bits/stdc++.h>
using namespace std;

const int _ = 1e4;

int n;
int a[_], b[_];
int f[_][_];

int main()
{
    // start here..

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            if (a[i] == b[j])
                f[i][j] = max(f[i][j], f[i - 1][j - 1] + 1);
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);
        }

    cout << f[n][n] << endl;
    return 0;
}