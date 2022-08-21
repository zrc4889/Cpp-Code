#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    if (n % 100 == 0)
    {
        if (n % 400 == 0)
            cout << 1 << endl;
        else
            cout << 0;
    } // 2004
    else
    {
        if (n % 4 == 0)
            cout << 1 << endl;
        else
            cout << 0;
    }

    return 0;
}