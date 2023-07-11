#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
// int x[_], h[_];
// 暴力 0pts

int f[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, d, a;
    cin >> n >> d >> a;
    for (int i = 1; i <= n; i++)
    // cin >> x[i] >> h[i];
    {
        int x, h;
        cin >> x >> h;
        f[x] = h;
    }
    for (int i = 1; i <= n; i++)
    {
        if (f[i]) // 最左端点
        {
            for (int j = i; j <= d * 2; j++)
            {
                if (f[j]) f[j] -= a;
                if (f[j] < 0) f[j] = 0;
            }
        }
    }
    return 0;
}