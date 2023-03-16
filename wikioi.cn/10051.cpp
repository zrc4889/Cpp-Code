#include <bits/stdc++.h>
using namespace std;

const int _ = 1e6 + 1;
int a[_];

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, k;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cin >> k;
    int l = 0, r = n;
    while (l + 1 < r)
    {
        int mid = l + r >> 1;
        if (a[mid] >= k)
            r = mid;
        else
            l = mid;
    }
    if (a[l] == k)
        cout << l << endl;
    else if (a[r] == k)
        cout << r << endl;
    else
        cout << -1 << endl;
    return 0;
}