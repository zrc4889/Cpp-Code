#include <bits/stdc++.h>
using namespace std;
const int _ = 10001;
int f[_], a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n = 1;
    while (~scanf("%d", &a[n++]))
        // f[n] = 1;
    ;
    // n -= 2;
    // f[1] = a[1];
    // f[0] = 1;
    for (int i = 1; i <= n; i++)
        for (int j = i; j >= 1; j--)
            if (a[i] <= a[j])
                f[i] = max(f[i], f[j] + 1);
    int maxx = -1;
    for (int i = 1; i <= n; i++)
        maxx = max(maxx, f[i]);
    cout << maxx << endl;
    // 第一问成功
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < a[i + 1])
            ans++;
    }
    cout << ans + 1 << endl;
    return 0;
}