#include <bits/stdc++.h>
using namespace std;
const int _ = 10001;
int a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= m; i++)
        next_permutation(a + 1, a + 1 + n);
    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';
    return 0;
}