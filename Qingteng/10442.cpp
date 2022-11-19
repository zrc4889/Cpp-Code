#include <bits/stdc++.h>
using namespace std;
const int _ = 1e6;

int a[_];
int f[_];

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
        f[i] = i;
        int res1, res2;
        res1 = res2 = 0;
        for (int j = i; j >= 1; j--)
        {
            if (a[j] == 1)
                res1++;
            else if (a[j] == 2)
                res2++;
            if ((res2 == 0) || (res1 == 0) || (abs(res1 - res2) <= k))
                f[i] = min(f[i], f[j - 1] + 1);
        }
    }
    cout << f[n] << endl;
    return 0;
}