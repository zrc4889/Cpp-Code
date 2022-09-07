#include <bits/stdc++.h>
using namespace std;
string a, b;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> a >> b;
    int la = a.length();
    int lb = b.length();
    int r1, r2; // result
    r1 = r2 = 1;
    for (int i = 0; i < la; i++)
    {
        int temp = a[i] - 'A' + 1;
        r1 *= temp;
    }
    for (int i = 0; i < lb; i++)
    {
        int temp = b[i] - 'A' + 1;
        r2 *= temp;
    }
    r1 %= 47, r2 %= 47;
    if (r1 == r2)
        cout << "GO" << endl;
    else
        cout << "STAY" << endl;
    return 0;
}