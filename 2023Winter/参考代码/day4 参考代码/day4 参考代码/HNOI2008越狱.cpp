#include <iostream>
using namespace std;
typedef long long ll;
const ll mod = 100003;

ll qpow(ll a, ll b, ll c) {
    ll res = 1;
    while (b) {
        if (b & 1)
            res = res * a % c;
        b >>= 1;
        a = a * a % c;
    }
    return res;
}

int main() {
    ll m, n;
    cin >> m >> n;
    ll ans = (qpow(m, n, mod) - m * qpow(m - 1, n - 1, mod) % mod) % mod;
    if (ans < 0)
        ans += mod;
    cout << ans << endl;
    return 0;
}