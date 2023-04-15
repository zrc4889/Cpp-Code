#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 1141;
int t1[_], t2[_];

signed main()
{
    // start here..

    int n, m;

    int a, b;
    cin >> n >> m >> a >> b;

    if (n == m)
        return cout << n << endl, 0;

    // int f = 1;

    t1[0] = n, t2[0] = m;

    for (int i = 1; i <= 1101; i++)
    {
        t1[i] = t1[i - 1] + a, t2[i] = t2[i - 1] + b; // 暴力模拟
    }

    // cout << t1 << endl;
    for (int i = 0; i <= 1010; i++)
        for (int j = 0; j <= 1010; j++)
            if (t1[i] == t2[j])
                return cout << t1[i] << endl, 0;

    return 0;
}