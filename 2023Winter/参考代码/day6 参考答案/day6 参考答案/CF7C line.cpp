#include <bits/stdc++.h>

using namespace std;

long long a, b, c, x, y;

long long ex_gcd(long long a, long long b, long long &x, long long &y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    long long xx, yy;

    // bx' + (a % b)y' = d
    long long d = ex_gcd(b, a % b, xx, yy);
    // bxx + (a % b)yy = d
    // bxx + (a - a / b * b) yy = d
    // bxx + a yy - a / b * b * yy = d
    // a * yy + b (xx - a / b * yy) = d
    // a * x +  b * y               = d
    x = yy;
    y = xx - a / b * yy;
    return d;
}
int main() {
    cin >> a >> b >> c;

    long long d = ex_gcd(a, b, x, y);

    // ax + by = d
    // x = x' - bt
    // y = y' + at
    if (c % d != 0)
        cout << -1;
    else {
        cout << x * (-c / d) << " " << y * (-c / d) << endl;
    }

    return 0;
}