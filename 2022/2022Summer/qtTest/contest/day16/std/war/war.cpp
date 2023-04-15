#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
bool f[N], g[N];
int n, sum, ans = 0;
int w[N];
int main() {
	freopen("war.in", "r", stdin);
	freopen("war.out", "w", stdout); 
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &w[i]);
        sum += w[i];
    }
    f[0] = true;
    for (int i = 1; i <= n; ++i) {
        for (int j = 0; j <= sum; ++j)
            if (f[j]) {
                g[j + w[i]] = true;
                g[abs(j - w[i])] = true;
            }

        for (int j = 0; j <= sum; ++j) f[j] |= g[j];
    }
    for (int i = 1; i <= sum; ++i)
        if (f[i])
            ans++;
    cout << ans;
    return 0;
}
