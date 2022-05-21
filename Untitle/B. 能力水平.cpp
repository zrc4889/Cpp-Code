#include <bits/stdc++.h>
using namespace std;
double s[200000], x[200000], sh1 = 0, xi1 = 0, x2 = 0, s2 = 0;
long long n, m, ans = 0;
int main()
{
    int n, m;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> x[i];
        xi1 += x[i];
        x2 += x[i];
    }
    xi1 /= m;
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
        sh1 += s[i];
        s2 += s[i];
    }
    sh1 /= n;
    sort(x, x + m);
    for (int i = 0; i < m - 1; i++)
    {
        if ((x2 - x[i]) / (m - ans - 1) > xi1 && (s2 + x[i]) / (n + ans + 1) > sh1)
        {
            s[n + ans] = x[i];
            ans++;
            x2 -= x[i];
            s2 += x[i];
            xi1 = x2 / (m - ans);
            sh1 = s2 / (n + ans);
        }
    }
    cout << ans;
}