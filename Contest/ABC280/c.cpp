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
    int la = a.size(), lb = b.size();
    int n = max(la, lb);
    // int pos;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i]) return cout << i + 1 << endl, 0;
    }

    return 0;
}