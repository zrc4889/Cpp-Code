#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int s[100], a, l;
    for (int i = 1; i <= 7; ++i)
        cin >> s[i];
    cin >> a >> l;
    int ans = 50;
    for (int i = 1; i <= 7; ++i)
        ans += s[i];
    if (a)
        ans += 5;
    if (ans >= l)
        cout << "AKIOI" << endl;
    else
        cout << "AFO" << endl;
    return 0;
}