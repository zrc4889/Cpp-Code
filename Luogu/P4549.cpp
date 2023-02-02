#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
    return y ? gcd(y, x % y) : x;
}

int main()
{
    // start here..

    int n;
    cin >> n;

    int ans = 0;

    for (int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        tmp = abs(tmp);
        ans = gcd(ans, tmp);
        // 一个推广到多个
    }

    cout << ans << endl;

    return 0;
}