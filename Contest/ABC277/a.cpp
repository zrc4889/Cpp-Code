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
    int n, x;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == x)
        {
            return cout << i << endl, 0;
        }
    }
    return 0;
}