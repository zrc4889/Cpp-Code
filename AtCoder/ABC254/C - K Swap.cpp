#include <bits/stdc++.h>
using namespace std;
int a[200000];
int n; // Length
int k; // Swap times
int b[200000];
int ans = 0;
void Swap(int x, int y)
{
    int s;
    s = x, x = y, y = s;
    ans++;
    return;
}
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i], b[i] = a[i];
    sort(b + 1, b + 1 + n);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] != b[i])
            ans++;
    }
    ans /= 2;
    cout<<ans;
    // if (ans == k)

    //     cout << "YES";
    // for (int i = 1; i <= n; i++)
    // {
    //     int n = a[i];
    //     for (int j = i; j <= n; j++)
    //     {
    //         int m = a[j];
    //         if (m < n)
    //         {
    //             Swap(m, n);
    //             break;
    //         }
    //     }
    // }
    // cout << ans;
    // if (k == ans)
    // {
    //     cout << "YES";
    // }
    return 0;
}