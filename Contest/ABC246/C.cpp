#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, K, X, a;
multiset<int> s;
signed main()
{
    cin >> n >> K >> X;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        s.insert(a);
    }
    int tot = n;
    while (K > 0 && tot > 0)
    {
        auto it = --s.end();
        s.erase(it);

        int p = *it;
        if (p >= X)
        {
            int c = min(K, p / X); // 全优惠 或 能优惠多少就多少
            K -= c; // 券用掉
            s.insert(p - c * X); // 存入优惠后的金钱
        }
        else
        {
            tot--;
            K--;
        }
    }
    int ans = 0;
    for (auto it : s)
        ans += it;
    cout << ans << endl;
}