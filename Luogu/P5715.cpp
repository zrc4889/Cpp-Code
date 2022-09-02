#include <bits/stdc++.h>
using namespace std;
int a[5];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> a[1] >> a[2] >> a[3];
    sort(a + 1, a + 1 + 3);
    cout << a[1] << ' ' << a[2] << ' ' << a[3] << endl;
    return 0;
}