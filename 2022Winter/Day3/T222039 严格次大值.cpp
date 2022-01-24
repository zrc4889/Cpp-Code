#include <bits/stdc++.h>
using namespace std;
int a[1000000];
int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> a[i];

    sort(a + 1, a + n + 1);
    int m = 1;
    for (int i = 2; i <= n; ++i)
        if (a[i] != a[i - 1]) {
            a[++m] = a[i];
        }
    if (m <= 1)
        cout << -1;
    else if (m <= 2)
        cout << min(a[1] % a[2], a[2] % a[1]);
    else
        cout << max(a[m - 2] % a[m], a[m] % a[m - 1]);

    return 0;
}