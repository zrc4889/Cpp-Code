#include <bits/stdc++.h>
using namespace std;
int ans = 0;
void dfs(int n, int x)
{
    if (n == 0)
    {
        ans++;
        return;
    }
    for (int a = x; a <= n; a++)
    {
        dfs(n - a, a);
    }
}
int main()
{
    int n;
    cin >> n;
    dfs(n, 1);
    cout << ans << endl;
    return 0;
}