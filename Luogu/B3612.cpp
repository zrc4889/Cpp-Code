#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 10;
int a[_], s[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i > 1)
            s[i] = s[i - 1] + a[i];
        // 求前缀和
        else
            s[i] = a[1];
    }
    int Q;
    cin >> Q;
    int l, r;
    while (Q--)
    {
        cin >> l >> r;
        cout << s[r] - s[l - 1] << endl;
    }
    return 0;
}