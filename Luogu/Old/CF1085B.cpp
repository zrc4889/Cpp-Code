#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x, k, n, y;
    ll ans = 0;
    cin >> n >> k;
    for (int i = 1; i < k; i++)
        if (n % i == 0)
            ans = i; // 没有直接break，找最大能整除的
    cout << (n / ans) * k + ans; // 套公式
    return 0;
}