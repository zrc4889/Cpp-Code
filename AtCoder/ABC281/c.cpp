#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e5 + 10;
int a[_];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, t;
    cin >> n >> t;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    int start = t % sum;

    // 循环周期

    for (int i = 1; i <= n; i++)
    {

        // 找出具体某一个首歌，某一个点

        if (a[i] > start)
        {
            cout << i << " " << start << endl;
            return 0;
        }
        start -= a[i];
    }

    return 0;
}