#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

char a[1145], b[1145];

int n;
int f[1000][1000];

int dp()
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = std::max(f[i - 1][j], f[i][j - 1]);
    return f[n][n];
}

int main()
{
    // start here..

    // string a;
    int k;
    cin >> a;
    cin >> k;

    n = strlen(a);

    int cnt = n - 1;

    for (int i = 0; i < n; i++)
    {
        b[cnt--] = a[i];
    }
    // cout << a << endl;

    cout << dp() << endl;

    return 0;
}