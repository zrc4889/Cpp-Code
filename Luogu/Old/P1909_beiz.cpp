#include <bits/stdc++.h>
using namespace std;
// const int _ = 4;
// int num[_], sto[_];
// int m, w;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    int ans;
    for (int i = 0; i < 3; i++)
    {
        int j, k;
        cin >> j >> k;
        int t1 = j, t2 = k;
        while (j < n)
            j <<= 1, k <<= 1;
        while (j > n)
            j -= t1, k -= t2;
        while (j < n)
            j += t1, k += t2;
        if (k < ans || ans == 0)
            ans = k;
        // 取最小值
    }
    cout << ans << endl;
    return 0;
}