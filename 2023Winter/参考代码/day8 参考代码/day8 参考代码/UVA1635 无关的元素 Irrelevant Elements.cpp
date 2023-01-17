#include <bits/stdc++.h>
using namespace std;
typedef long long unsigned ULL;
int N, M;
int fac[100][2];
int P[100];
void get_p(int m) {
    int cnt = 0;
    for (int i = 2; i * i <= m; ++i)
        if (m % i == 0) {
            fac[++cnt][0] = i;
            while (m % i == 0) m /= i, ++fac[cnt][1];
        }
    if (m > 1)
        fac[++cnt][0] = m, fac[cnt][1] = 1;
    fac[0][0] = cnt;
    return;
}
bool check(int m, int n) {
    int a, b;
    b = n;
    for (int i = 1; i <= fac[0][0]; ++i) {
        int p = fac[i][0];
        for (; a % p == 0; a /= p, ++P[i])
            ;
        for (; b % p == 0; b /= p, --P[i])
            ;
    }
    for (int i = 1; i <= fac[0][0]; ++i)
        if (P[i] < fac[i][1])
            return 0;
    return 1;
}
int main() {
    bool flag = 0;
    scanf("%d%d", &N, &M);
    get_p(M);
    for (int i = 2; i <= N; ++i)
        if (check(N - 1, i - 1))
            printf("%d\n", i), flag = 1;
    if (!flag)
        printf("0\n");
    return 0;
}