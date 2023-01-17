#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, a, b, ans = 1;
const int mod = 1e9 + 7;
ll qpow(ll x, ll p) {
    ll res = 1;
    while (p != 0) {
        if (p % 2 != 0) {
            res = res * x % mod;
        }
        x = x * x % mod;
        p /= 2;
    }
    return res % mod;
}
int main() {
    cin >> n;
    a = 2 * n;
    b = n;
    for (int i = 1, j = a; i <= b; i++, j--) {
        ans = ans * j % mod;
        ans = ans * qpow(i, mod - 2) % mod;
    }
    ans = ans * qpow(n + 1, mod - 2) % mod;
    cout << ans;
    return 0;
}