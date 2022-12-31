#include <bits/stdc++.h>
using namespace std;

const int _ = 114514;
int a[_], b[_];

int main()
{
    // start here..
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b + 1, b + n + 1);

    int t = unique(b + 1, b + n + 1) - (b + 1);

    for (int i = 1; i <= n; i++)
        a[i] = lower_bound(b + 1, b + t + 1, a[i]) - b;

    for (int i = 1; i <= n; i++)
        cout << a[i] << ' ';

    return 0;
}