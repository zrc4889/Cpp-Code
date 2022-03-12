#include <bits/stdc++.h>
using namespace std;
int n, k, ans;
void dfs(int x, int s, int t)
{
    if (s == 1)
    {
        ans++;
        return;
    }
    for (int i = x; i <= t / s; i++)
    {
        dfs(i, s - 1, t - i);
    }
}
int main()
{
    cin >> n >> k;
    dfs(1, k, n);
    cout << ans;
    return 0;
}