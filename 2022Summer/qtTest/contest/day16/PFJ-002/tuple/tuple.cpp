#include <bits/stdc++.h>
using namespace std;
// 容斥原理？
int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("tuple.in", "r", stdin);
    freopen("tuple.out", "w", stdout);
    int n;
    cin >> n;
    long long ans = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 2 * i; j <= n; j += i)
        {
            ans += n / j - 1; // 类似于筛法的 nlogn
        }
    }
    cout << ans << endl;
    return 0;
}