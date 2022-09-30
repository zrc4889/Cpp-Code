#include <bits/stdc++.h>
#define int double
using namespace std;

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    int live, t;
    t = 0;
    live = 10.0;
    while (n--)
    {
        int x, a;
        cin >> x >> a;
        if (live - x <= 0)
            break; // 命减没了，不要减了
        live -= x;
        // 够减，减掉
        t += a; // 总经验
        if (live > 10.0)
            live = 10.0; // 处理增加的情况
        // 最高只能是 10
    }
    int p = 1, m = 0;
    while (t >= p)
    {
        t -= p; // 转换单位
        m++;
        p *= 2;
    }
    cout << m << ' ' << t << endl;
    return 0;
}