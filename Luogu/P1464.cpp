#include <bits/stdc++.h>
using namespace std;

const int _ = 31;
int mem[_][_][_];

int func(int a, int b, int c)
{
    // int res = 0;
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20)
        return func(20, 20, 20);
    if (mem[a][b][c])
        return mem[a][b][c];
    else if (a < b && b < c)
        return mem[a][b][c] = func(a, b, c - 1) + func(a, b - 1, c - 1) - func(a, b - 1, c);
    else
        return mem[a][b][c] = func(a - 1, b, c) + func(a - 1, b - 1, c) + func(a - 1, b, c - 1) - func(a - 1, b - 1, c - 1);
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;

    int a, b, c;
    while (cin >> a >> b >> c)
    {
        if (a == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << func(a, b, c) << endl;
    }
    return 0;
}