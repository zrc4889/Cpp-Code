#include <bits/stdc++.h>
#define int long long 
using namespace std;

int c[1005][1005];
const int p = 10007;

int ksm(int a, int b, int c)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % c;

    int t = ksm(a, b / 2, c);
    t = t * t % c;
    if (b % 2 == 1)
        t = t * a % c;
    return t;
}

void init()
{
    for (int i = 0; i <= 1001; i++)
        c[i][0] = 1, c[i][i] = 1;
    for (int i = 2; i <= 1001; i++)
        for (int j = 1; j <= 1001; j++)
            c[i][j] = (c[i - 1][j] + c[i - 1][j - 1]) % p;
}

signed main()
{
    // start here..

    int a, b, k, n, m;
    cin >> a >> b >> k >> n >> m;

    a %= p, b %= p;

    init();

    int ans;
    cout << ksm(a, n, p) * ksm(b, m, p) * c[k][n] % p;
    // cout << ans;

    return 0;
}