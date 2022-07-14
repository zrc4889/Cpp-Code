#include <bits/stdc++.h>
using namespace std;
int f[5000];
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    cin >> a >> b >> c;
    f[0] = 0;
    for (int i = 1; i <= n; i++)
        f[i] = -1;
    for (int i = 1; i <= n; i++)
    // f[i] = max(f[i - a] + 1, f[i - b] + 1, f[i - c] + 1);
    {
        
        if (i >= a && f[i - a] != -1)
            f[i] = max(f[i], f[i - a] + 1);
        if (i >= b && f[i - b] != -1)
            f[i] = max(f[i], f[i - b] + 1);
        if (i >= c && f[i - c] != -1)
            f[i] = max(f[i], f[i - c] + 1);
    }
    cout << f[n] << endl;
    return 0;
}