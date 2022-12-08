#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 114514;
int a[_];

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << a[1] << ' ';
    for (int i = 2; i <= n; i++)
    {
        cout << a[i] - a[i - 1] << ' ';
    }
    return 0;
}