#include <bits/stdc++.h>
using namespace std;

int main()
{
    // start here..

    int ans = 0;
    int n, k;
    cin >> n >> k;

    ans = pow(10, k);
    // 基数
    if (ans > n)
        cout << ans << endl;
    else
        cout << (n / ans + 1) * ans << endl;

    return 0;
}