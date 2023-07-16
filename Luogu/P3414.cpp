#include <bits/stdc++.h>
#define int long long
using namespace std;

const int p = 6662333;

int qpow(int a, int b, int c)
{
    if (b == 0) return 1;
    if (b == 1) return a % c;

    int t = qpow(a, b / 2, p);
    t = t * t % c;
    if (b % 2 == 1) t = t * a % c;
    return t % c;
}

signed main()
{
    // start here..

    int n;
    cin >> n;

    cout << (int)qpow(2, n - 1, p) % p << endl;

    return 0;
}