#include <bits/stdc++.h>
#define int long long
using namespace std;

struct node
{
    int a, b;
} t[1010];
bool cmp(node x, node y) { return x.b < y.b; }
int n, k, f[1010], ans = -1;

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> t[i].a >> t[i].b;
        if (t[i].a > t[i].b)
            swap(t[i].a, t[i].b);
    }
    sort(t + 1, t + 1 + n, cmp);
    // f[1] = 1/;
    for (int i = 1; i <= n; i++)
    {
        f[i] = t[i].b - t[i].a;
        for (int j = 0; j < i; j++)
            if (t[i].a > t[j].b)
                f[i] = max(f[i], f[j] + (t[i].b - t[i].a));
        // cout << f[i] << endl;
        ans = max(ans, f[i]);
    }

    cout << ans << endl;

    return 0;
}