#include <bits/stdc++.h>
using namespace std;
const int _ = 1e4 + 10;
int ans;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    int t = m + 1;
    while (t <= n + m)
    {
        for (int i = 1; i <= m; i++)
        {
            a[i]--;
            if (a[i] == 0)
                a[i] = a[t], t++;
        }
        ans++;
    }
    cout << ans << endl;
    return 0;
}