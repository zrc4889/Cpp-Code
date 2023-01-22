#include <bits/stdc++.h>
#define no return cout << "No" << endl, 0;
#define yes return cout << "Yes" << endl, 0;
using namespace std;

int main()
{
    // start here..

    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;

    if (s[a] != '-')
        no else s[a] = '0';
    int len = s.size();
    len--;
    for (int i = 0; i <= len; i++)
    {
        // if (s[i] == '-')
        // continue;
        if (!isdigit(s[i]))
            no
    }
    yes;

    return 0;
}