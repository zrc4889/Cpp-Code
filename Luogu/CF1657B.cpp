#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, B, x, y, T, lst, sum;
int solve()
{
    cin >> n >> B >> x >> y;
    int lst = 0, sum = 0;
    for (int i = 1; i <= n; ++i)
    {
        if (lst + x > B)
            lst -= y;
        else
            lst += x;
        sum += lst;
    }
    return sum;
}
signed main()
{
    int T;
    cin >> T;
    while (T--)
        cout << solve() << endl;
}