#include <bits/stdc++.h>
using namespace std;

// 0 <= x y z <= k
// x + y + z = s

// 二分肯定炸飞
// 不会是 dp 吧 awa

int main()
{
    // start here..

    int k, s;
    cin >> k >> s;
    int ans = 0;

    for (int x = 0; x <= k; x++)
    {
        int l = 0, r = s;

        while (l <= r)
        {
            int mid = l + (r - l) / 2;
            int y = mid;
            
            if (x + y + z == s)
                ans++;
            
        }
    }

    cout << ans << endl;

    return 0;
}