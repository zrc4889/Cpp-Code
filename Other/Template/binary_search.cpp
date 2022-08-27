#include <bits/stdc++.h>
using namespace std;
int f[10000], g[10000];
int main()
{
    int n;
    cin >> n;
    f[1] = 1, g[1] = 8; // f 奇数个3，偶数个3
    for (int i = 2; i <= n; ++i)
    {
        f[i] = (f[i - 1] * 9 + g[i - 1]) % 12345;
        g[i] = (g[i - 1] * 9 + f[i - 1]) % 12345;
    }
    cout << g[n] << endl;
}