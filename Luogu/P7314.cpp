#include <bits/stdc++.h>
using namespace std;

int a[1145141];

int main()
{
    // start here..

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int ans = 0xfffffff;

    for (int i = 1; i < n; i++)
    {
        ans = min(ans, max(a[i], a[i + 1]) - min(a[i], a[i + 1]));
    }
    cout << ans << endl;

    return 0;
}