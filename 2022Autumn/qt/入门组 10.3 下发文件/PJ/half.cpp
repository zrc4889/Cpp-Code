#include <bits/stdc++.h>
using namespace std;
#define int long long
int lcm(int a, int b)
{
    return a / __gcd(a, b) * b;
}
signed main()
{
    freopen("half.in", "r", stdin);
    freopen("half.out", "w", stdout);
    int n, m;
    int tot = 1, p;
    cin >> n >> m;
    vector<int> a;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        // 从 偶数 这一条件入手
        a.push_back(p / 2);
        tot = lcm(tot, p / 2);
        if (tot > m)
            return cout << 0 << endl, 0;
    }
    for (int i = 0; i < n; i++)
    {
        if ((tot / a[i]) % 2 == 0)
            return cout << 0 << endl, 0;
    }
    if (tot > m)
        cout << 0 << endl;
    else
        cout << (m - tot) / (2 * tot) + 1 << endl;
        // 还原公式 X = Ak * (p + 0.5) 即 X = Ak / 2 * (2p + 1) 其中 2p + 1 必定是奇数
    return 0;
}