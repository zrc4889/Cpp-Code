#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int h, m;
    cin >> h >> m;
    int newh, newm;

    newh = m / 10 % 10 + h / 10 % 10 * 10;
    newm = h % 10 * 10 + m % 10;

    if (16 <= h && h <= 19)
    {
        cout << 20 << ' ' << 0 << endl;
    }
    else if (h == 23 && m >= 40)
    {
        cout << 0 << ' ' << 0 << endl;
    }

    else if (newh > 23 || newm > 59)
    {
        cout << h + 1 << ' ' << 0 << endl;
    }
    else
    {
        cout << h << ' ' << m << endl;
    }
    return 0;
}