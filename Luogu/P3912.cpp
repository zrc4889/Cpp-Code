#include <bits/stdc++.h>
using namespace std;
const int _ = 1e8 + 10;
bool f[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    // 欧拉筛 又称线性筛
    int n;
    int ans = 0;
    f[1] = 1;
    cin >> n;
    for (int i = 2; i * i <= n; ++i) // 相当于 <= sqrt(n)
    {
        if (f[i] == 0)
        {   
            for (int j = i * i ; j <= n; j += i)
            {
                f[j] = 1;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        if (f[i] == 0)
            ans++;
    cout << ans << endl;
    return 0;
}