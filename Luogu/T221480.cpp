#include <bits/stdc++.h>
using namespace std;
int n, ans = 0;
int a[110] = {};
int f[110], from[110];
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        f[i] = 0;
        from[i] = 0;
    }
    sort(a + 1, a + n + 1);
    a[0] = INT_MIN / 3, a[n + 1] = INT_MAX / 3;
    for (int i = 1; i <= n; ++i)
    {
        if (a[i] - a[i - 1] <= a[i + 1] - a[i])
            f[i - 1]++, from[i - 1] = i;
        else
            f[i + 1]++, from[i + 1] = i;
    }
    for (int i = 1; i <= n; ++i)
    {
        if (!f[i])
            ans++;
        else
        {
            if (f[i] == 1 && from[from[i]] == i && from[i] < i && f[from[i]] == 1)
                ans++;
        }
    }
    cout << ans;
    // system("pause");
    return 0;
}