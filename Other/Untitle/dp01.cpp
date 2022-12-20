#include <bits/stdc++.h>
using namespace std;
const int _ = 114514;
int a[_], f[_], t[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int W, n;
    cin >> W >> n;
    for (int i = 1; i <= n; i++)
        cin >> t[i] >> a[i];
    // f[1] = a[1];
    for (int i = 1; i <= n; i++)
        for (int j = W; j >= t[i]; j--)
            f[j] = max(f[j], f[j - t[i]] + a[i]);
    cout << f[W] << endl;
    return 0;
}