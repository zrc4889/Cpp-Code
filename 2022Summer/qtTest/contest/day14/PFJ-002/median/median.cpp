#include <bits/stdc++.h>
using namespace std;
int a[114514];
int ans;
int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    freopen("median.in", "r", stdin);
    freopen("median.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            sort(a + i, a + j);
            int mid = i + (j - i) / 2;
            if (a[mid] == k)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}