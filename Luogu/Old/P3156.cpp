#include <bits/stdc++.h>
using namespace std;
const int _ = 11451419;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        int n,
        m;
    cin >> n >> m;
    int x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
    {
        cin >> x;
        cout << a[x] << endl;
    }
    return 0;
}