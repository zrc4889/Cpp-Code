#include <bits/stdc++.h>
using namespace std;

unsigned long long f[21];
int n;

int main()
{
    cin >> n;

    f[1] = 0;
    f[2] = 1;

    // 错排递推式

    for (int i = 3; i <= 20; i++)
        f[i] = (i - 1) * (f[i - 1] + f[i - 2]);

    cout << f[n];

    return 0;
}