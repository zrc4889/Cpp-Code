#include <iostream>
#include <cmath>
using namespace std;

bool isprime(long long x) {
    if (x <= 1)
        return false;
    for (long long i = 2; i * i <= x; i++)
        if (x % i == 0)
            return false;
    return true;
}

int main() {
    long long n;
    while (cin >> n) {
        double p = sqrt(n);
        if ((long long)p == p && isprime(p))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}