#include <bits/stdc++.h>
#define int long long
using namespace std;
int f[114514];
signed main()
{
    int n;
    cin >> n;
    f[1] = 0, f[2] = 1;
    for (int i = 3; i <= n; i++)
    {
        f[i] = f[i - 1] + f[i - 2];
    }
    cout << f[n];
    return 0;
}