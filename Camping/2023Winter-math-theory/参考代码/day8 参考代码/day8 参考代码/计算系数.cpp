#include <bits/stdc++.h>
#define mod 10007
using namespace std;
long long C[10001][10001];
int quickpower(long long n, long long m) {
    long long nn = n;
    n = 1;
    for (int i = 1; i <= m; i++) n = (n * nn) % mod;
    return n;
}
int c(long long n, long long m) {
    C[0][0] = C[1][0] = C[1][1] = 1;
    for (int i = 2; i <= n; i++) {
        C[i][0] = C[i][i] = 1;
        for (int j = 1; j < i; j++) C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % mod;
    }
    return C[n][m];
}
int main() {
    long long a, b, k, n, m;
    cin >> a >> b >> k >> n >> m;
    cout << c(k, n) % mod * quickpower(a, n) % mod * quickpower(b, m) % mod << endl;
    return 0;
}