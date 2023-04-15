#include <bits/stdc++.h>
using namespace std;

long long C(long long a, long long b) {
    long long num = 1, i;
    for (i = 1; i <= b; i++) {
        num *= a - i + 1;
        num /= i;
    }
    return num;
}
int main() {
    long long n, b, g, i;
    while (~scanf("%lld%lld%lld", &b, &g, &n)) {
        long long num = 0;
        for (i = 4; i < n; i++) num += C(b, i) * C(g, n - i);
        cout << num << endl;
    }
    return 0;
}