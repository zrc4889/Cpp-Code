#include <bits/stdc++.h>
using namespace std;
int l, i, r, sum = 0, n;
int main()
{
    cin >> n;
    for (i = 1; i <= n; ++i)
    {
        cin >> l >> r;
        sum += r - l + 1;
    }
    cout << sum;
    // system("pause");
    return 0;
}