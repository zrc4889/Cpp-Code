#include <bits/stdc++.h>
// #define int long long
using namespace std;
int n, m;
const int _ = 3e4 + 10;
int a[_];
// 暴力搜 20 pts
// 记忆化搜索 哪里 return 记忆哪里，记过直接就 return
const int MAX = 201;
int mem[MAX][MAX];
int dfs(int m, int n)
{
    if (mem[m][n])
        return mem[m][n];
    if (n == 0 && m == 0)
        return mem[m][n] = 1; // 啥都不放就以这种
    if (n == 0 && m > 0)      // 还有盆子，梅花了qwq
        return mem[m][n] = 0;
    int ans = 0;
    // min(a[n], m) 全放满，或者全是同种花
    for (int k = 0; k <= min(a[n], m); ++k)
        ans = (ans + dfs(m - k, n - 1)) % 1000007; // m - k 考虑 m 之前 上一种花在哪个位置开始
    // f[i][j] 表示前 i 个位置放 j 种花
    // ans %= 1000007;
    return mem[m][n] = ans;
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    // int n;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    cout << dfs(m, n) << endl;
    return 0;
}