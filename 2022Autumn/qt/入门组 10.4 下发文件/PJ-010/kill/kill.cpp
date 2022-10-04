#include <bits/stdc++.h>
using namespace std;
const int _ = 2e5 + 10;
int a[_], b[_];
// 只能贪心，不会dp，预计30pts
struct FIGHT
{
    int a; // 伤害 damage
    int b; // 体力消耗
} g[_];
bool cmp(FIGHT x, FIGHT y)
{
    if (x.b == y.b)
        return x.a > y.a;
    return x.b < y.b;
}
int main()
{
    freopen("kill.in", "r", stdin);
    freopen("kill.out", "w", stdout);
    int h, n;
    cin >> h >> n;
    for (int i = 1; i <= n; i++)
        cin >> g[i].a >> g[i].b;

    sort(g + 1, g + 1 + n, cmp);

    int f = 0;
    int times = 0;
    for (int i = 1; i <= n; i++)
    {
        // FIGHT g[i] = g[i];
        if (g[i].a != 0)
            times = h / g[i].a;
        while (times--)
        {
            h -= g[i].a;
            f += g[i].b;
        }
        if (h <= 0)
            break;
    }
    cout << f << endl;
    return 0;
}