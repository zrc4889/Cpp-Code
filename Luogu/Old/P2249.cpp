#include <bits/stdc++.h>
using namespace std;

int n, t;
const int _ = 1e6 + 10;
int a[_];
int find(int x)
{
    int l, r, mid;
    l = 1, r = n;

    while (r - l > 1)
    {
        mid = l + (r - l) / 2;
        if (a[mid] < x)
            l = mid;
        else
            r = mid;
    }
    if (a[l] == x)
        return l;
    else if (a[r] == x)
        return r;
    else
        return -1;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> t;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    while (t--)
    {
        int tmp;
        cin >> tmp;
        int ans = find(tmp);
        cout << ans << ' ';
    }
    return 0;
}