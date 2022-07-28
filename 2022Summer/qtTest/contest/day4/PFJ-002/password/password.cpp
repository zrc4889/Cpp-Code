#include <bits/stdc++.h>
using namespace std;
// string a[5];
char a[114514];
char b[114514];
char c[114514];
char d[114514];
string pas;
int main()
{
    freopen("password.in", "r", stdin);
    freopen("password.out", "w", stdout);
    cin >> pas;
    int _1, _2, _3, _4;
    _1 = _2 = _3 = _4 = 0;
    int l = pas.size();
    for (int i = 0; i < l; i++)
    {
        // cout << pas[i];
        if ('a' <= pas[i] && pas[i] <= 'z')
            // a[1][_1++] = pas[i];
            a[_1++] = pas[i];
        else if ('A' <= pas[i] && pas[i] <= 'Z')
            // a[2][_2++] = pas[i];
            b[_2++] = pas[i];
        else if ('0' <= pas[i] && pas[i] <= '9')
            // a[3][_3++] = pas[i];
            c[_3++] = pas[i];
        else
            // a[4][_4++] = pas[i];
            d[_4++] = pas[i];
    }
    int ans = 0;
    int la = strlen(a);
    int lb = strlen(b);
    int lc = strlen(c);
    int ld = strlen(d);

    if (la == 0)
        ans++;
    // else
    //     cout << a;
    if (lb == 0)
        ans++;
    // else
    //     cout << b;
    if (lc == 0)
        ans++;
    // else
    //     cout << c;
    if (ld == 0)
        ans++;
    cout << "password level:" << 4 - ans << endl;
    if (la == 0)
        cout << "(Null)" << endl;
    else
        cout << a << endl;
    if (lb == 0)
        cout << "(Null)" << endl;
    else
        cout << b << endl;
    if (lc == 0)
        cout << "(Null)" << endl;
    else
        cout << c << endl;
    if (ld == 0)
        cout << "(Null)" << endl;
    else
        cout << d << endl;
    // else
    //     cout << d;

    // for (int i = 1; i <= la; i++)
    // int ans = 0;
    // for (int i = 1; i <= 4; ++i)
    // {
    //     int s = a[i].size();
    //     if (s == 0)
    //         ans++;
    // }
    // cout << 4 - ans << endl;
    return 0;
}