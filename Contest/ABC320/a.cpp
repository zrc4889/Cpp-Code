#include <bits/stdc++.h>
using namespace std;

int qpow(int a, int n)
{
    int res = 1;
    while (n)
    {
        if (n & 1) res = res * a;
        a *= a, n >>= 1;
    }
    return res;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << qpow(a, b) + qpow(b, a) << endl;
    return 0;
}