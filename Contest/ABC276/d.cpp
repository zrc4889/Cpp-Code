#include <bits/stdc++.h>
using namespace std;
int n;
// 跟数学有关的题目
const int _ = 114514;
int a[_];

inline int gcd(int a, int b)
{
    // 两组三异加个膜
    while (b ^= a ^= b ^= a %= b)
        ;
    return a;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];

    int p = a[1];
    for (int i = 2; i <= n; i++)
        p = gcd(p, a[i]);

    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        a[i] /= p; // 除掉了各自的最大公因数，剩下的只有2、3的因数了
        while (a[i] % 2 == 0)
            a[i] /= 2, ans++;
        while (a[i] % 3 == 0)
            a[i] /= 3, ans++;
        if (a[i] != 1) // 去除完还有其他的因数，无解
        {
            ans = -1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}