#include <bits/stdc++.h>
using namespace std;
const int _ = 2e6 + 10;
vector<int> g[_];
bool p[_];

int main()
{
    int n, m;
    int ans = 0;
    freopen("eq.in", "r", stdin);
    freopen("eq.out", "w", stdout);
    cin >> n >> m;

    // 素数筛法
    for (int i = 2; i * i <= n; ++i)
    {
        if (!p[i])
        {
            for (int j = i; j <= n; j += i)
            {
                p[j] = true;
                g[j].push_back(i);
            }
        }
    }
    for (int i = 1; i <= n; ++i)
    {
        int t = 1, y = i;
        for (int v : g[i])
        { // 新语法
            int cnt = 0;
            while (y % v == 0)
            {
                cnt++;
                y /= v;
            }
            if (cnt & 1) // 判断奇数
                t *= v;
        }
        if (y > 1)
            t *= y;
        ans += sqrt(m / t);
    }
    cout << ans << endl;

    return 0;
}