#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
typedef long long ll;
const int N = 1e7 + 10;
bool check[N];
int n, tot, prime[N / 3];
int phi[N];
ll ans, f[N];
void sieve() {
    f[1] = phi[1] = 1;
    for (int i = 2; i <= n; i++) {
        if (!check[i])
            prime[++tot] = i, phi[i] = i - 1;
        for (int j = 1; j <= tot && i * prime[j] <= n; j++) {
            check[i * prime[j]] = 1;
            if (!(i % prime[j])) {
                phi[i * prime[j]] = phi[i] * prime[j];
                break;
            } else
                phi[i * prime[j]] = phi[i] * (prime[j] - 1);
        }
    }
    for (int i = 2; i <= n; i++) f[i] = f[i - 1] + (phi[i] << 1);
}
int main() {
    scanf("%d", &n);
    sieve();
    for (int i = 1; i <= tot; i++) ans += f[n / prime[i]];
    printf("%lld\n", ans);
    return 0;
}