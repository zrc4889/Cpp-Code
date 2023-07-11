#include <bits/stdc++.h>
#define Read(s) freopen(s ".in", "r", stdin);
#define Write(s) freopen(s ".out", "w", stdout);
using namespace std;
#define int long long
const int _ = 8e5 + 10;
int n, m;
int now[_], f[30001];
// int ans = 1e18;
struct Mat
{
    int a, b;
} p[_];

signed main()
{
    Read("mat");
    Write("mat");

    cin >> n >> m;

    for (int i = 1; i <= m; i++)
        cin >> p[i].a >> p[i].b;

    for (int i = 1; i <= n; i++)
    {
        int Min = 1e18, num; // 最小值初值越大越好
        for (int j = 1; j <= m; j++)
        {
            if (Min > p[j].a * (pow(now[j] + 1, p[j].b) - pow(now[j], p[j].b)))
            {
                Min = p[j].a * (pow(now[j] + 1, p[j].b) - pow(now[j], p[j].b));
                num = j; // 是最小值，记录下标。
            }
        } // 贪心
        now[num]++;
    }
    int ans = 0;
    for (int i = 1; i <= m; i++)
        ans += p[i].a * pow(now[i], p[i].b);
    cout << ans << endl;
    return 0;
}
