#include <bits/stdc++.h>
#define int long long 
using namespace std;

struct talk
{
    int x; // 开始的时间
    int y; // 结束的时间
} a[5010];

int f[5010]; // 以第 i 位演讲者结束，最长的使用时间
int n;

bool cmp(talk a, talk b)
{
    if (a.x == b.x)
        return a.y < b.y;
    return a.x < b.x;
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i].x >> a[i].y;
    sort(a + 1, a + 1 + n, cmp);
    int maxx = -1;
    for (int i = 1; i <= n; i++)
    {
        // 何为初值
        for (int j = 1; j < i; j++)
        // 何处转移
        {
            // 何时转移
            if (a[i].x >= a[j].y)
                // 如何转移
                f[i] = max(f[i], f[j]);
        }
        f[i] += a[i].y - a[i].x;
        maxx = max(maxx, f[i]);
    }
    // 何为答案
    cout << maxx << endl;
    return 0;
}