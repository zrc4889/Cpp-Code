#include <bits/stdc++.h>
using namespace std;
const int _ = 3e4;
int a[_], f[_];
int main()
{
    freopen("fan.cpp", "r", stdin);
    freopen("fan.cpp", "w", stdout);
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    f[1] = 1;
    for (int i = 1; i <= n; ++i)
    {
        int c = 0, b = 0;
        for (int j = i - 1; j >= 1; --j)
        {
            if (a[j + 1] == 1)
                c++;
            else
                b++;
            if (c == i - j || b == i - j || (abs(c - b) >= m))
                f[i] = max(f[i], f[j + 1]);
        }
    }
    cout << f[n];
    return 0;
}