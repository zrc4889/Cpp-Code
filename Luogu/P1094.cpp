#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4 + 10;
int a[maxn], s[maxn];
int main()
{
    int w, n;
    cin >> w >> n;
    int t = n;
    while (t--)
    {
        cin >> a[t];
    }
    sort(a, a + n);
    int sum = 0;
    int ans = 0;
    for (int i = 1; i <= n; i++)
        s[i] = s[i - 1] + a[i]; // 前缀和
    int p = 0;
    s[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        if (s[i] - s[p] > w)
        {
            ans++;
            i--;
            p = i;
        }
    }
    cout << ans + 1;
    return 0;
}