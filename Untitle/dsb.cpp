#include <bits/stdc++.h>
using namespace std;
int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}
int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    // ;
    int x, y, ans = 0;
    cin >> x >> y;
    for (int i = x; i <= y; i++)
    {
        for (int j = x; j <= y; j++)
        {
            int g = gcd(i, j);
            int b = i * j / g;
            if (g == x && b == y)
                ans++;
        }
    }
    cout << ans << endl;
    return 0;
}