#include <bits/stdc++.h>
using namespace std;
char s[10000000];
int mod(string a, int b)
{
    int s;
    int r = a[s++] - '0';
    int l = a.length();
    while (s < l)
    {
        r = (r * 10 + a[s] - '0') % b;
        s++;
    }
    return r;
}
signed main()
{
    freopen("ball.in", "r", stdin);
    freopen("ball.out", "w", stdout);
    cin >> s;
    cout << mod(s, 7);
    return 0;
}