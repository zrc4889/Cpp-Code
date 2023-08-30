#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 2e5 + 10;

int a[_];
int n;
int sum = 0, avg;

signed main()
{

    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum += a[i];
    }

    avg = sum / n;

    // int cnt = 0;
    // for (int i = 1; i <= n; ++i)
    //     if (a[i] == avg)
    //         a[i] = -1, cnt ++;

    sort(a + 1, a + 1 + n);

    int l = 1, r = n;
    int ans = 0;

    while (l <= r)
    {
        ans += abs(min(abs(a[l] - avg), abs(a[r] - avg)));
        l ++, r --;
    }

    cout << ans << endl;
    return 0;
}