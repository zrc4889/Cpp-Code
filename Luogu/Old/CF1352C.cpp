#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int l = 1, r = 2e9 + 1;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (mid - mid / n < k)
            {
                l = mid; // l++ 是尺取法
            }
            else
            {
                r = mid;
            }
        }
        if (l - l / n == k)
            cout << l << endl;
        else
            cout << r << endl;
    }
    return 0;
}