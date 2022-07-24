#include <cstdio>
#include <bits/stdc++.h>
using namespace std;
const int _ = 2e6 + 10;
// double a[_];
// int t[_];
int f[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        int n;
    double x;
    int y;
    // scanf("%d", &n);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> x >> y;
        // cout << x << endl;
        // scanf("%f %d", &x, &y);
        // printf("%f\n", x);
        for (double j = 1; j <= y; j++)
        {
            int cur = j * x;
            // 先存一个整型变量
             if (f[cur])
                f[cur] = 0;
            else
                f[cur] = 1;
        }
    }
    for (int i = 1;; i++)
    {
        if (f[i])
        {
            printf("%d", i);
            return 0;
        }
    }
    return 0;
}