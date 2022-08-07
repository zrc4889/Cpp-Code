#include <bits/stdc++.h>
using namespace std;
#define int long long
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
signed main()
{
    freopen("toy.in", "r", stdin);
    freopen("toy.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int a, m, b, n;
    while (cin >> a >> m >> b >> n)
    {
        int x = a * (n * b) / gcd(a, n * b);
        int c1 = x / a;
        int y = a * b / gcd(a, b);
        int c2 = x / y * (y / b - 1);
        cout << c1 + c2 << endl;
        // 考虑边上转与角上转动
        // 边拉直
    }
    return 0;
}