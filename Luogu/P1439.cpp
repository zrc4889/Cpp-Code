#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;
map<int, int> mp;
int a[_];
int f[_];

int main()
{
    // start here..

    // 3 2 1 4 5 to
    // 1 2 3 4 5

    // 3 2 1 4 5
    // subsec 1 4 5 len 3

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int t;
        cin >> t;
        mp[t] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] = mp[a[i]];
        // cout << a[i] << ' ';
    }

    int ans = -1;

    f[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        if (a[i] > a[i - 1])
            f[i] = f[i - 1] + 1;
        else
            f[i] = 1;
        ans = max(ans, f[i]);
    }

    cout << ans << endl;

    return 0;
}