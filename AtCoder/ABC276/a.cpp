#include <bits/stdc++.h>
using namespace std;
string a;
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> a;
    int len = a.size();
    int minx = -1;
    for (int i = 0; i < len; i++)       
        if (a[i] == 'a')
            minx = max(minx, i);
    if (minx != -1)
        cout << minx + 1 << endl;
    else
        cout << minx << endl;
    return 0;
}