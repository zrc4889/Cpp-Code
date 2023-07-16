#include <bits/stdc++.h>
using namespace std;

int a[4], b[4];

int main()
{
    // start here..
    for (int i = 1; i <= 3; i++)
        cin >> a[i];
    for (int i = 1; i <= 3; i++)
        cin >> b[i];

    sort(a + 1, a + 4);
    sort(b + 1, b + 4);
    int ans = 0;
    for (int i = 1; i <= 3; i++)
        ans += abs(a[i] - b[i]);
    cout << ans << endl;

    return 0;
}