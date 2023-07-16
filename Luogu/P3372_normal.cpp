#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
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
        int op, x, y, k;
        cin >> op;
        if (op == 1)
        {
            cin >> x >> y >> k;
            for (int i = x; i <= y; i++)

            {
                a[i] += k;
            }
        }
        if (op == 2)
        {
            cin >> x >> y;
            int ret = 0;
            for (int i = x; i <= y; i++)
            {
                ret += a[i];
            }
            cout << ret << endl;
        }
    }
    return 0;
}