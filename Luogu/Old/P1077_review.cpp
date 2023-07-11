#include <bits/stdc++.h>
using namespace std;
const int _ = 3e4 + 10;
const int _1 = 101;
int a[_];
int mem[_1][_1];
int n, m;
int dfs(int m, int n);
signed main()
{
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << dfs(m, n) << endl;
    return 0;
}
int dfs(int m, int n)
{
    if (mem[m][n])
        return mem[m][n];
    if (n == 0 && m == 0)
        return mem[m][n] = 1; // 不放花，是一种方案
    if (n == 0 && m > 0)
        return mem[m][n] = 0; // 没花了
    int ans = 0;
    for (int k = 0; k <= min(a[n], m); k++)
        ans = (ans + dfs(m - k, n - 1)) % 1000007; // 上一种花(n-1)放 k 盆(m-k)
    return mem[m][n] = ans;
}