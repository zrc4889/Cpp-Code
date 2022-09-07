#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
int ans = 0;
const int _ = 5e6 + 10;
int a[_];
bool check(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
        if (x % i == 0)
            return 0;
    return 1;
}
void dfs(int x, int cnt, int num)
{
    if (num == k) // 选满了
    {
        if (check(cnt))
            ans++;
        return;
    }
    if (x == n + 1)
        return;
    dfs(x + 1, cnt + a[x], num + 1);
    dfs(x + 1, cnt, num);
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    dfs(1, 0, 0); // dfs(i, j, k) 表示选 i 个数，累计加和 j，一共选了 k 个数字
    cout << ans;
    return 0;
}