#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5 + 10;
bool a[maxn], b[maxn];
int n, k, ans, x;
int main() {
    freopen("paper.in", "r", stdin);
    freopen("paper.out", "w", stdout);
    cin >> n >> k;

    for (int i = 1; i <= n; ++i) {
        cin >> x;
        a[x] = true;
    }

    for (int i = 1; i <= n; ++i) {
        cin >> x;
        b[x] = true;
    }

    for (int i = 1; i <= k; ++i)
        if (a[i] && b[i])
            ans++;

    cout << ans << endl;

    for (int i = 1; i <= k; ++i)
        if (a[i] && b[i])
            cout << i << " ";
    return 0;
}
