#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1000005;
int tree[_];
int n;
int lowbit(int x) { return x & (-x); }
void update(int x, int y)
{
    while (x <= n)
    {
        tree[x] += y;   // 每个加上
        x += lowbit(x); // 逐级递增
    }
}
int query(int x)
{
    int sum = 0;
    while (x)
    {
        sum += tree[x]; // 每个加上
        x -= lowbit(x); // 逐级递减
    }
    return sum;
}
const int MOD = 998244353;
int jc[_] = {1, 1};
int a[_];
signed main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        jc[i] = (jc[i - 1] * i) % MOD;
        // 初始化 阶乘
        update(i, 1); // 每个都更新
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ans = (ans + ((query(a[i]) - 1) * jc[n - i]) % MOD) % MOD;
        update(a[i], -1);
    }
    cout << ans + 1 << endl;
    return 0;
}