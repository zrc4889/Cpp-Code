#include <bits/stdc++.h>
// #define int double
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int h, r, a;
    cin >> h >> r;
    a = 20000 / (3.14 * r * r * h) + 1;
    cout << a;
    return 0;
}