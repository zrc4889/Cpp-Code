#include <bits/stdc++.h>
using namespace std;
bool f1(int x)
{
    return !(x % 2);
}
bool f2(int x)
{
    return 4 < x && x <= 12;
}
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int x;
    cin >> x;
    int a = f1(x), b = f2(x);
    if ((a && b) || (b && a))
        cout << 1 << ' ';
    else
        cout << 0 << ' ';
    if (a || b)
        cout << 1 << ' ';
    else
        cout << 0 << ' ';
    if ((a && !b) || (!a && b))
        cout << 1 << ' ';
    else
        cout << 0 << ' ';
    if ((!a && !b))
        cout << 1 << ' ';
    else
        cout << 0 << ' ';
    return 0;
}