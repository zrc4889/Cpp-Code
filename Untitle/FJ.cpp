#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 3e5 + 10;
int a[_];
// 贪心，必定 100pts
bool cmp(int x, int y) { return x > y; }
signed main()
{
    freopen("fight.in", "r", stdin);
    freopen("fight.out", "w", stdout);
    int n, k;
    cin >> n >> k;
    int sum = 0;
    // 贪心算法
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
            continue;
        if (k > 0)
        {
            // 还有 A 攻击次数
            // a[i] = 0;
            k--;
            sum++;
        }
        else
        {
            // a[i]--;
            // if (a[i] != 0)
            //     i--;
            // sum++;
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}