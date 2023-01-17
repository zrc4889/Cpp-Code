#include <bits/stdc++.h>

using namespace std;
long long a, b, n;
long long ksm(long long a, long long t, long long b) {
    if (t == 0)
        return 1 % b;

    long long tmp = ksm(a, t / 2, b);
    tmp = tmp * tmp % b;

    if (t % 2 == 1)
        tmp = tmp * a % b;
    return tmp;
}
int main() {
    cin >> a >> b;
    n = b;
    long long result = n;
    for (long long i = 2; i * i <= n; ++i)
        if (n % i == 0) {
            result = result - result / i;
            while (n % i == 0) n /= i;
        }
    if (n > 1)
        result = result - result / n;

    long long phib = result;

    long long x = ksm(a, phib - 1, b);
    cout << x << endl;
    return 0;
}