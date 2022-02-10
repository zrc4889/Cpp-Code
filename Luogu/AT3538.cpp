#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k, a[55];
bool cmp(int a, int b) { return a > b; }
signed main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        scanf("%lld", a + i);
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1, sum = a[i]; i <= n; i++, sum += a[i])
        if (sum >= k)
            reutnr printf("%lld\n", i), 0;
    return puts("-1"), 0;
}