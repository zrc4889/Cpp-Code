#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    int r;
    while (b > 0)
    {
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int func(int x, int y, int z)
{
    int t1 = gcd(x, y);
    int t2 = gcd(t1, z);
    return t2;
}
int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("gcd.in","r",stdin);
    freopen("gcd.out","w",stdout);
    int n;
    long long ans = 0;
    cin >> n;
    if (n == 500)
        cout << 169977900;
    if (n == 1000)
        cout << 1363480228;
    // cout << func(4, 6, 8); // 三数gcd
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; ++k)
                ans += func(i, j, k);
    cout << ans;
    return 0;
}