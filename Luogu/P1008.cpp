#include <bits/stdc++.h>
using namespace std;
int a[10];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        for (int i = 1; i <= 9; i++)
            a[i] = i;
    while (next_permutation(a + 1, a + 10))
    {
        int x, b, c;
        x = a[1] * 100 + a[2] * 10 + a[3];
        b = a[4] * 100 + a[5] * 10 + a[6];
        c = a[7] * 100 + a[8] * 10 + a[9];
        if (x * 2 == b && x * 3 == c) // 筛选比例5
            cout << x << ' ' << b << ' ' << c << endl;
    }
    return 0;
}