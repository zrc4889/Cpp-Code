#include <bits/stdc++.h>
using namespace std;
const int _ = 1e5 + 10;
bool a[_], b[_];
int n, k, ans, x;
int main()
{
    freopen("paper.in", "r", stdin);
    freopen("paper.out", "w", stdout);
    cin >> n >> k;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        a[x] = 1;
    }
    for (int i = 1; i <= n; ++i)
    {
        cin >> x;
        b[x] = 1;
    }

    // 桶思想

    for (int i = 1; i <= k; ++i)
    {
        if (a[i] && b[i])
            ans++;
    }
    cout << ans << endl;
    for (int i = 1; i <= k; ++i)
    {
        if (a[i] && b[i])
            cout << i << " ";
    } // 分步骤来
    return 0;
}