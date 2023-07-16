#include <bits/stdc++.h>
using namespace std;
char ch;
int a[1145141] = {0};
int w, l;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    for (int i = 1; cin >> ch && ch != 'E'; i++)
    {
        if (ch == 'W')
            a[i] = 1;
        else
            a[i] = 2;
    }
    for (int i = 1; true; i++)
    {
        if (a[i] == 1)
            w++;
        if (a[i] == 2)
            l++;
        if (a[i] == 0)
        {
            cout << w << ':' << l << endl
                 << endl;
            break;
        }
        int c = abs(w - l);
        if (c >= 2 && (w >= 11 || l >= 11))
        {
            cout << w << ':' << l << endl;
            w = 0, l = 0;
        }
    }
    w = 0, l = 0;
    for (int i = 1; true; i++)
    {
        if (a[i] == 1)
            w++;
        if (a[i] == 2)
            l++;
        if (a[i] == 0)
        {
            cout << w << ':' << l << endl
                 << endl;
            break;
        }
        int c = abs(w - l);
        if (c >= 2 && (w >= 21 || l >= 21))
        {
            cout << w << ':' << l << endl;
            w = 0, l = 0;
        }
    }
    return 0;
}