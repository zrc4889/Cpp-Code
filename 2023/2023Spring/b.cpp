#include <bits/stdc++.h>
using namespace std;

int main()
{
    // start here..

    int k, n;
    cin >> k >> n;

    int ans = 0;
    for (int i = 0; i <= k; ++i)
    {
        for (int j = 0; j <= k; ++j)
        {
            for (int l = 0; l <= k; ++l)
                if (i + j + l == n)
                    ans++;
        }
    }

    cout << ans << endl;

    return 0;
}