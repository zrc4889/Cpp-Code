#include <bits/stdc++.h>
using namespace std;
#define int long long
using namespace std;
int a, b, N, ans;
bool check(int a, int b)
{
    int X = (a + b) * (a * a + b * b);
    if (X >= N)
        ans = min(ans, X);
    return X >= N;
}
signed main()
{
    ans = 4e18;
    cin >> N;
    for (a = 0; a * a * a <= N; ++a)
    {
        int l = 0, r = pow(N - a * a * a, 1.0 / 3) + 1;
        while (l + 1 < r)
        {
            b = (l + r) / 2;
            if (check(a, b))
                r = b;
            else
                l = b;
        }
        check(a, l);
        check(a, r);
    }
    cout << ans;
}