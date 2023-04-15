#include <cstdio>
#include <algorithm>
using namespace std;
#define N 10000010
typedef long long ll;
const int m = 10000000;
int prime[N], tot, phi[N];
ll sum[N];
bool np[N];
int main() {
    int i, j, t, n, last;
    ll ans;
    sum[1] = phi[1] = 1;
    for (i = 2; i <= m; i++) {
        if (!np[i])
            phi[i] = i - 1, prime[++tot] = i;
        for (j = 1; j <= tot && i * prime[j] <= m; j++) {
            np[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                phi[i * prime[j]] = phi[i] * prime[j];
                break;
            } else
                phi[i * prime[j]] = phi[i] * (prime[j] - 1);
        }
        sum[i] = sum[i - 1] + phi[i];
    }
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &n), ans = 0;
        for (i = 1; i <= n; i = last + 1) last = n / (n / i), ans += (sum[last] - sum[i - 1]) * sum[n / i];
        printf("%lld\n", 2 * ans - sum[n]);
    }
    return 0;
}