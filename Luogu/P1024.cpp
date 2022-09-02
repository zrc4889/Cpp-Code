#include <bits/stdc++.h>
#define int double
using namespace std;
int a, b, c, d;
int f(int x)
{
    return a * x * x * x + b * x * x + c * x + d;
}
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> a >> b >> c >> d;
    for (int i = -100; i <= 100; i++) // -100 ~ 100
    {
        int l = i, r = i + 1;
        int x = f(l), y = f(r);
        if (!x) 
            printf("%.2lf ", l);
        // 满足条件的两个 if 语句
        if (x * y < 0)
        {
            while (r - l >= 0.001) // 浮点二分模板
            {
                int mid = l + (r - l) / 2;
                if (f(mid) * f(r) <= 0)
                    l = mid;
                else
                    r = mid;
            }
            printf("%.2lf ", r);
        }
    }
    return 0;
}