#include <bits/stdc++.h>
using namespace std;
const int _ = 5e5 + 10;
int a[_], s[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    s[0] = 0;
    for (int i = 1; i <= n; i++)
        cin >> a[i], s[i] = s[i - 1] + a[i];
    while (m--)
    {
        int b, x, y;
        cin >> b >> x >> y;
        if (b == 1)
        {
            a[x] += y;
            for (int i = 1; i <= n; i++)
                s[i] = s[i - 1] + a[i]; // update
        }
        else if (b == 2)
        {
            cout << s[y] - s[x - 1] << endl;
        }
    }
    return 0;
}