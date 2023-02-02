#include <bits/stdc++.h>
using namespace std;

int n;
const int _ = 1e6;
int a[_], f[_];

int cost(int i, int j)
{
    return abs(a[j] - a[i]);
}

int main()
{
    // start here..

    cin >> n;

    for (int i = 1; i <= n; i++)
        cin >> a[i];

    f[2] = cost(1, 2); // 特例同时也可以作为初始化

    for (int i = 3; i <= n; i++)
    {
        f[i] = min(f[i - 1] + cost(i, i - 1), f[i - 2] + cost(i, i - 2));
    }

    cout << f[n] << endl;
    return 0;
}