#include <bits/stdc++.h>
using namespace std;
const int _ = 101;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    prev_permutation(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;
}