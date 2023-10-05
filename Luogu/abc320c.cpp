#include <bits/stdc++.h>
using namespace std;

string a, b, c;
int n;

int main()
{
    cin >> n;
    cin >> a >> b >> c;
    a = a + a + a, b = b + b + b, c = c + c + c;

    int ans = 3 * n;
    for (int i = 0; i < 3 * n; ++i)
        for (int j = 0; j < 3 * n; ++j)
            for (int k = 0; k < 3 * n; ++k)
            {
                if (i == j || i == k || j == k)
                    continue;
                if (a[i % n] == b[j % n] && a[i % n] == c[k % n])
                    ans = min(ans, max(i, max(j, k)));
            }
    if (ans == 3 * n)
        return cout << -1 << '\n', 0;
    cout << ans << '\n';
    return 0;
}