#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 5001;

int fac[_];
const int p = 998244353;
int a[_];
int cha[_];
// 差分数组？
int n;

void init()
{
    fac[0] = fac[1] = 1;
    for (int i = 2; i <= n; i++)
    {
        fac[i] = fac[i - 1] * i % p;
    }
}

int query(int x)
{
    int res = 0;
    for (int i = 1; i < x; i++)
        res += cha[i];
    return res; // 统计前面有多少个比他小并且没有出现过的数字
}

signed main()
{
    // start here..

    cin >> n;

    init();

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        cha[a[i]] = 1;
    }

    int rank = 1;

    // 阶乘

    for (int i = 1; i <= n; i++)
    {
        rank += query(a[i]) * fac[n - i] % p;
        cha[a[i]] = 0;
    }

    cout << rank % p << endl;

    return 0;
}