#include <bits/stdc++.h>
using namespace std;
const int N = 4000;
int n, ans, a[N], b[N], f[N][N], d[N];
int main() {
	freopen("seq.in", "r", stdin);
	freopen("seq.out", "w", stdout);
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) scanf("%d", &a[i]);
    for (int i = 1; i <= n; i++) scanf("%d", &b[i]);
    for (int i = 1; i <= n; i++) {
        int val = 0;
        for (int j = 1; j <= n; j++) {
            if (a[i] == b[j])
                f[i][j] = val + 1;
            else
                f[i][j] = f[i - 1][j];
            if (b[j] < a[i])
                val = max(val, f[i - 1][j]);
            ans = max(ans, f[i][j]);
        }
    }
    cout << ans;
    return 0;
}
