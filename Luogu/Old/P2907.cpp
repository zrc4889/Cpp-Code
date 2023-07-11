#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k, ans;
void dfs(int num)
{
    if (num <= k)
        ans++;              // 不够分
    else if ((num - k) & 1) // 偶数，是可以分得
        ans++;
    else
        dfs((num + k) / 2), dfs((num - k) / 2);
    // 两堆分别讨论
    return;
}
signed main()
{
    cin >> n >> k;
    dfs(n);
    cout << ans << endl;
    return 0;
}