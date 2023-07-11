#include <bits/stdc++.h>
using namespace std;

int func(int a, int b)
{
    while (a != b)
    {
        if (a > b)
            a -= b;
        else
            b -= a;
    }
    return a;
}
int a[114514];
int main()
{
    // #ifdef LOCAL
    //     LOCALfo
    // #endif
    freopen("number.in", "r", stdin);
    freopen("number.out", "w", stdout);
    int n;
    int ans = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; ++i)
        for (int j = i; j <= n; ++j)
            if (func(a[i], a[j]) == 1)
                // 互质
                ans++;
    // 复杂度 o(nlogn)
    cout << ans;
    return 0;
}