#include <bits/stdc++.h>
using namespace std;

int n, p, q;
int minx = 1e9 + 7;

int main()
{
    // start here..

    cin >> n >> p >> q;
    for (int i = 1; i <= n; ++i) 
    {
        int t;
        cin >> t;
        minx = min(minx, t);
    }

    int ans = minx + q;
    cout << (ans < p ? ans : p) << "\n";

    return 0;
}