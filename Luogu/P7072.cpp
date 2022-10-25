#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
int t[_]; // 我心爱的桶
signed main()
{
    int n, w;
    cin >> n >> w;
    // while (n--)
    for (int j = 1; j <= n; j++)
    {
        int tmp;
        cin >> tmp;
        t[tmp]++; // 这个大小的桶加一个
        int sum = 0;
        // 分数为 0 的也要考虑
        for (int i = 600; i >= 0; i--)
        {
            sum += t[i]; // 统计达到的人数，从高到低
            if (sum >= max(1, j * w / 100))
            {
                // 套用公式
                cout << i << ' ';
                break;
            }
        }
    }
    return 0;
}