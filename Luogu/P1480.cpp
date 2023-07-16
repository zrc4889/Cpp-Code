#include <bits/stdc++.h>
#define int long long
using namespace std;
string a1;
int a[9999999], b, c[9999999];
signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int x = 0;
    memset(a, 0, sizeof a);
    memset(c, 0, sizeof b);
    cin >> a1 >> b;
    int lena = a1.length();
    for (int i = 0; i <= lena; i++)
        a[i + 1] = a1[i] - 48;
    for (int i = 1; i <= lena; i++)
        c[i] = (x * 10 + a[i]) / b, x = (x * 10 + a[i]) % b;
    int lenc = 1;
    while (c[lenc] == 0 && lenc < lena)
        lenc++;
    for (int i = lenc; i <= lena; i++)
        cout << c[i];
    return 0;
}