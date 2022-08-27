#include <bits/stdc++.h>
using namespace std;
const int _ = 1e6 + 10;
int n, m;
int q, a[_];
int find(int x)
{
    int l = 1, r = n;
    while (l < r)
    {
        int mid = (l + r) >> 1;
        if (a[mid] >= x)
            r = mid;
        else
            l = mid + 1;
    }
    if (a[l] == x)
        return l;
    else
        return -1;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
    {
        cin >> q;
        int ans = find(q);
        cout << ans << ' ';
    }
    return 0;
}