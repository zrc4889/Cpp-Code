#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int a, b;
    cin >> a >> b;
    cout << fixed << setprecision(10) << double(b / a) / b;
    return 0;
}