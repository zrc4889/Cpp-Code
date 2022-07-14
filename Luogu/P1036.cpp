#include <bits/stdc++.h>
#define int long long
using namespace std;
const int maxn = 1e3 + 10;
int n, k;
int ans;
int a[maxn];
bool check(int x)
{
    if (x == 1)
    {
        return 0;
    }
    for (int i = 2; i * i <= x; ++i)
    {
        if (x % i == 0)
            return 0;
    }
    return 1;
}
void dfs(int x, int cnt, int num)
{
    if (num == k)
    {
        if (check(cnt))
        {
            ans++;
        }
        return;
    }
    if (x == n + 1)
        return;
    dfs(x + 1, cnt + a[x], num + 1);
    dfs(x + 1, cnt, num);
}
signed main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    dfs(1, 0, 0);
    cout << ans;
    return 0;
}