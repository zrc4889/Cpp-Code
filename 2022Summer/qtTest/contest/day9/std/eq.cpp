#include <bits/stdc++.h>

using namespace std;
const int N = 2000000 + 10;
vector<int> g[N];
int n, m, ans = 0;
bool p[N];
int main() {
    freopen("eq.in", "r", stdin);
    freopen("eq.out", "w", stdout);
    cin >> n >> m;

    for (int i = 2; i * i <= n; ++i)
        if (!p[i]) {
            for (int j = i; j <= n; j += i) {
                p[j] = true;
                g[j].push_back(i);
            }
        }

    for (int i = 1; i <= n; ++i) {
        int t = 1, y = i;
        for (int v : g[i]) {
            int cnt = 0;
            while (y % v == 0) {
                cnt++;
                y /= v;
            }
            if (cnt & 1)
                t *= v;
        }
        if (y > 1)
            t *= y;
        // cout << i << " " << t << endl;
        ans += sqrt(m / t);
    }
    cout << ans << endl;

    return 0;
}
