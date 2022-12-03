#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    string a;
    cin >> a;
    int t = 0;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'v')
            t++;
        if (a[i] == 'w')
            t += 2;
    }
    cout << t << endl;
    return 0;
}