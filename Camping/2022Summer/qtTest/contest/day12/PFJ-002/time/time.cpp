#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("time.in", "r", stdin);
    freopen("time.out", "w", stdout);
    int h, m;
    scanf("%d : %d", &h, &m);
    // int t = m;
    m += 3 * 60 + 30;
    if (m >= 60)
        h += (m / 60);
    m %= 60;
    h %= 24;
    if (0 <= h && h <= 9)
        cout << 0 << h;
    else
        cout << h;
    cout << ':';
    if (0 <= m && m <= 9)
        cout << 0 << m;
    else
        cout << m;
    // cout << h << ' ' << m;
    return 0;
}