#include <bits/stdc++.h>
using namespace std;
const int N = 4e5 + 10;
int a[N];
int n, m, sum, ans = 0;
int solve()
{
    cin >> n >> m;
    for (int i = 1; i <= m; ++i)
    {
        cin >> a[i];
        a[i] = n - a[i];
    }
    sort(a + 1, a + m + 1);
    long long sum = 0;
    for (int i = 1; i <= m; ++i)
    {
        sum += a[i];      // 优化非枚举
        if (sum == n - 1) // 到达洞口时
            return i;
        else if (sum >= n) // 越过洞口
            return i - 1;
    }
    return m; // 全吃了
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // cin >> temp;
        cout << solve() << endl;
    }
    return 0;
}