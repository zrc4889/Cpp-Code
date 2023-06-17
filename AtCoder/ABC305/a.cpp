#include <bits/stdc++.h>
using namespace std;

signed main()
{

    int n;
    cin >> n;
    
    if (n == 100) return cout << 100 << endl, 0;

    int x = n % 10;
    if (x == 0 || x == 1 || x == 2) return cout << (n / 10) * 10 << endl, 0;
    if (x == 3 || x == 4 || x == 5) return cout << (n / 10) * 10 + 5 << endl, 0;
    if (x == 6 || x == 7 || x == 8) return cout << (n / 10) * 10 + 5 << endl, 0;
    if (x == 9) cout << ((n / 10) + 1) * 10 << endl, 0;

    return 0;
}