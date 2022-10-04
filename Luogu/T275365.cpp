#include <bits/stdc++.h>
#define int long long
using namespace std;
int odd[114514] = {0};
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        int T;
    cin >> T;
    while (T--)
    {
        int l, r;
        cin >> l >> r;

        int sum = 0;
        if (l == r || r - l <= 1e3)
        {
            if (l % 2 == 0)
                l++;
            for (int i = l; i <= r; i += 2)
            {
                if (i % 2 == 1)
                    sum++;
            }
            cout << sum << endl;
        }
        else
        {

            if (l % 2 == 0)
                l++;

            if (r % 2 == 1)
                r++;

            sum = (r - l) / 2;
            cout << sum + 1 << endl;
        }
    }
    return 0;
}