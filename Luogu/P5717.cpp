#include <bits/stdc++.h>
using namespace std;
int a[4];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    for (int i = 1; i <= 3; i++)
        cin >> a[i];
    sort(a + 1, a + 1 + 3);

    if (a[1] + a[2] <= a[3])
        return cout << "Not triangle" << endl, 0;
    int f = a[1] * a[1] + a[2] * a[2];
    int g = a[3] * a[3];
    if (f == g)
        cout << "Right triangle" << endl;
    else if (f < g)
        cout << "Obtuse triangle" << endl;
    else if (f > g)
        cout << "Acute triangle" << endl;
    if (a[1] == a[2] || a[2] == a[3] || a[1] == a[3])
        cout << "Isosceles triangle" << endl;
    if (a[1] == a[2] && a[2] == a[3])
        cout << "Equilateral triangle" << endl;

    return 0;
}