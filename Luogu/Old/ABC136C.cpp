#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    int f = 0;
    int a;
    int mx = -1;

    for (int i = 1; i <= n; i++)
    {
        // 每个数最多加一，故如果一个数比此前最大的数字差了 1以上，就不可行
        
        cin >> a;
        mx = max(mx, a);
        if (mx - a > 1)
            f = 1;
    }
    if (f)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;

    return 0;
}