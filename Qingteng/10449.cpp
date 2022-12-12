#include <bits/stdc++.h>
using namespace std;

int T, mod;
short mem[10010][10010];
int f(int x, int y)
{
    if (mem[x][y] == -1)
        return -1;
    if (mem[x][y])
        return mem[x][y];
    mem[x][y] = -1;
    if (!x)
        return mem[x][y] = 1;
    if (!y)
        return mem[x][y] = 2;

    int num = (x + y) % mod;

    return mem[x][y] = f(num, (num % mod + y) % mod);
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> T >> mod;
    while (T--)
    {
        int x, y;
        cin >> x >> y;
        // cout << f(x, y) << endl;
        int res = f(x, y);
        if (res == -1)
            cout << "error" << endl;
        else if (res == 1)
            cout << "1" << endl;
        else if (res == 2)
            cout << "2" << endl;
    }
    return 0;
}