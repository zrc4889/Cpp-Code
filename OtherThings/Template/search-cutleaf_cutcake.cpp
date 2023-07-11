#include <bits/stdc++.h>
using namespace std;

int n, m, ans, R[30], H[30], S = 0;

void dfs(int x, int V)
{
    if (V < 0) return;

    if (x < m && V * 2 / R[x + 1] + S + R[m] * R[m] >= ans) return; // note. 3

    if (x == 0)
    {
        if (V == 0)
        {
            ans = min(ans, S + R[m] * R[m]);
        }
        return;
    } 

    for (int r = R[x + 1] - 1; r >= x; --r) // note. 1
        for (int h = H[x + 1] - 1; h >= x; --h)
        {
            S += 2 * r * h;
            R[x] = r, H[x] = h;
            dfs(x - 1, V - r * r * h);
            S -= 2 * r * h;
        }
}

int main()
{
    // start here..

    // int n, m;
    cin >> n >> m;

    // R[m] < R[m + 1]

    // r * r * m <= n -> r <= sqrt(n / m)

    R[m + 1] = (int)sqrt(n / m) + 1; // note. 2

    // m * m * h <= n -> h <= n / (m * m)

    H[m + 1] = n / (m * m) + 1;

    ans = 1e9;

    dfs(m, n);  

    cout << ans << endl;

    return 0;
}