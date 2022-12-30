#include <bits/stdc++.h>
using namespace std;

map<char, char> mp;

int main()
{
    // start here..
    // d b q p
    mp['d'] = 'b';
    mp['b'] = 'd';
    mp['p'] = 'q';
    mp['q'] = 'p';

    string a;
    cin >> a;

    int len = a.size();

    // string !

    // map !

    // reverse ...

    string b;
    b = a;
    reverse(b.begin(), b.end());

    for (int i = 0; i < len; i++)
    {
        b[i] = mp[b[i]];
    }
    if (a == b)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}