#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    int k, a, b;
    cin >> k >> a >> b;

    int base = 1, sum = 0;
    while (a)
    {
        sum += a % 10 * base;
        a /= 10;
        base *= k; // 进制换算
    }
    int ans = sum;
    base = 1, sum = 0;

    while (b)
    {
        sum += b % 10 * base;
        b /= 10;
        base *= k; // 进制换算
    }
    cout << sum * ans << endl;
    return 0;
}