#include <bits/stdc++.h>
#define int long long
using namespace std;

const int _ = 30;

int mem[_][_][_];

int w(int a, int b, int c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    if (a > 20 || b > 20 || c > 20)
        return w(20, 20, 20); // 判越界还写数组？
    if (mem[a][b][c] != -1)
        return mem[a][b][c];
    if (a < b && b < c)
        return mem[a][b][c] = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    else
        return mem[a][b][c] = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    memset(mem, -1, sizeof mem);
    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == -1 && b == -1 && c == -1)
            return 0;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
    }
    return 0;
}