#include <bits/stdc++.h>
using namespace std;
int n, t, k = 3, m;
int main()
{
    // 就是把由多个mooooo组成的字符串拆分成之后一个m与多个o组成的子串
    cin >> n;
    m = n;
    while (t <= n)
        t = t * 2 + k, k++; // 算出长度
    k--;
    while (t > 0)
    {
        t = (t - k) / 2; // 不断递归，推出m所在最短的字符

        if (m > t)
        { // 二分法
            if (m <= t + k) // 在左边
            {
                if (m == t + 1) // 串首
                    return cout << "m", 0;
                else
                    cout << "o", 0;
            }
            else // 在右边
            {
                m = m - (t + k);
            }
        }
        k--;
    }
    return 0;
}