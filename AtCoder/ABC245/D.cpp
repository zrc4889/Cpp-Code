#include <bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int n, m, a[N], b[N], c[N];
int main()
{
    cin >> n >> m;
    for (int i = 0; i <= n; ++i)
        cin >> a[i];
    for (int i = 0; i <= n + m; ++i)
        cin >> c[i];
    //把被除式、除式按某个字母作降幂排列，并把所缺的项用零补齐．
    for (int i = m; i >= 0; --i)
    {
        //  // 用被除式的第一项除以除式第一项，得到商式的第一项．
        b[i] = c[i + n] / a[n];
        for (int j = 0; j <= n; ++j)
        { //用商式的第一项去乘除式，把积写在被除式下面（同类项对齐），然后相减得到新的被除式
            c[i + j] -= b[i] * a[j];
            //把减得的差当作新的被除式，再按照上面的方法继续演算
        }
    }

    for (int i = 0; i <= m; ++i)
        cout << b[i] << " ";
    return 0;
}