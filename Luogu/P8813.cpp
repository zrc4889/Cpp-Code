#include <bits/stdc++.h>
using namespace std;
const int _ = 1e9;
#define int long long

signed main()
{
    int n, m;
    cin >> n >> m;
    int sum = 1;
    while (m--)
    {
        sum *= n;
        if (sum > _)
            return cout << -1 << endl, 0;
    }
    cout << sum << endl;
    return 0;
}