#include <bits/stdc++.h>
using namespace std;

int n;
string s;
bool f[10][10];


int main()
{
    cin >> s;

    n = s.size();
    s = '#' + s;

    for (int l = 1; l <= n; ++ l)
        for (int r = l + 1; r <= n; ++ r)
        {
            if (l == r) f[l][r] = true;
            else if (s[l] == s[r] && r - l >= 3) f[l][r] |= f[l + 1][r - 1];
            else f[l][r] = false;
        }

    cout << f[1][5] << '\n';
    return 0;
}