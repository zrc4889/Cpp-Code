#include <bits/stdc++.h>
using namespace std;

int a[26] = {1, 2, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
string s = "UTPC";

signed main()
{
    for (int i = 0; i < 4; i++)
    {
        char c = getchar();
        if (a[c - 'A'] != a[s[i] - 'A'])
        {
            return cout << "no" << endl, 0;
        }
    }
    cout << "yes" << endl;
}