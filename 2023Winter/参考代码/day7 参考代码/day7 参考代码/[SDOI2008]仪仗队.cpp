#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
#define maxn 40010
long long prime[maxn], phi[maxn];
bool flag[maxn] = { 0 };
int n;
long long ans;

void get_phi() {
    memset(flag, 0, sizeof(flag));
    flag[1] = 1;
    int cnt = 0;
    for (int i = 2; i <= maxn; i++) {
        if (!flag[i])
            prime[cnt++] = i, phi[i] = i - 1;
        for (int j = 0; j < cnt && i * prime[j] < maxn; j++) {
            flag[i * prime[j]] = 1;
            if (i % prime[j] == 0) {
                phi[i * prime[j]] = phi[i] * prime[j];
                break;
            } else
                phi[i * prime[j]] = phi[i] * (prime[j] - 1);
        }
    }
}

int main() {
    scanf("%d", &n);
    get_phi();
    ans = 2;
    for (int i = 2; i < n; i++) ans += phi[i];
    printf("%lld", ans * 2 - 1);
    return 0;
}