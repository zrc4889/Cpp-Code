#include <bits/stdc++.h>
#define int long long
using namespace std;
int a[1145149];
int XOROperator(int &a, int &b)
{
    return a ^ b;
}
signed main()
{
    // ios::sync_with_stdio(0);
    // cin. tie(0);
    // cout.tie(0);
    // 3^5 即 0000 0011 ^ 0000 0101 = 0000 0111  因此，3|5的值得6
    // int a = 3, b = 5;
    freopen("xor.in", "r", stdin);
    freopen("xor.out", "w", stdout);
    int n;
    int ans = 0;
    // cin >> n;
    scanf("%lld", &n);
    for (int i = 1; i <= n; i++)
        // cin >> a[i];
        scanf("%lld", &a[i]);
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            ans += XOROperator(a[i], a[j]);
        }
    }
    printf("%lld", ans);
    return 0;
}