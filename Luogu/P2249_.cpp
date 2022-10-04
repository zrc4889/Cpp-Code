#include <bits/stdc++.h>
using namespace std;
const int _ = 1e6 + 10;
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
    while (m--)
    {
        int tmp;
        cin >> tmp;
        int cur = lower_bound(a + 1, a + 1 + n, tmp) - a;
        if (tmp != a[cur])
            cout << -1 << ' ';
        else
            cout << cur << ' ';
    }
    return 0;
}