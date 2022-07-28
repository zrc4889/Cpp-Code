#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        int k;
    int c = 0, d = 0;
    cin >> k;
    for (int i = 1; i <= k; ++i)
        for (int j = 1; j <= i; j++)
        {
            // 模拟一个数字三角形
            c += i; // 金币先加
            d++;    // 天数加
            if (d == k)
                return cout << c, 0;
        }
    return 0;
    /*XYC YYDS*/
}