#include <bits/stdc++.h>
using namespace std;

// #define int long long

#define fastIO()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0)

const int mod = 998244353;
const int maxn = 1 << 20;

vector<int> BIT(maxn, 0), fac(maxn, 1);

int LB(int x) { return x & -x; }

void Add(int idx, int val) {
    while (idx < maxn) BIT[idx] += val, idx += LB(idx);
}

int Sum(int idx, int ans = 0) {
    while (idx) ans += BIT[idx], idx -= LB(idx);
    return ans;
}

int32_t main() {
    fastIO();

    int n, ans = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) fac[i] = (int64_t)fac[i - 1] * i % mod;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    for (int i = 0; i < n; ++i) {
        Add(v[i], 1);
        ans = (ans + (int64_t)fac[n - i - 1] * (v[i] - Sum(v[i]))) % mod;
    }

    cout << ans << "\n";

    return 0;
}