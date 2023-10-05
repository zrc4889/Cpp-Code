#include <bits/stdc++.h>
using namespace std;

int main()
{
    // start here..

    int n;
    cin >> n;
    string s;
    cin >> s;

    int t = 0, a = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'T')
            t++;
        if (s[i] == 'A')
            a++;
    }

    if (t != a)
    {
        return cout << (t > a ? 'T' : 'A') << endl, 0;
    }

    // equal
    int res = t;

    t = 0, a = 0;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == 'T')
            t++;
        else if (s[i] == 'A')
            a++;
        if (t == res)
            return cout << "T" << endl, 0;
        else if (a == res)
            return cout << "A" << endl, 0;
    }

    return 0;
}