#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 1e5 + 10;
char a[_];
int b[_];
double n, m = 1;
int ans, k, l, x;
signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("melody.in", "r", stdin);
    freopen("melody.out", "w", stdout);
    cin >> a;
    x = strlen(a);
    if (a[0] != '|' || a[x - 1] != '|')
        return cout << "error" << endl, 0;
    for (int i = 1; i < x;)
    {
        if (a[i] != '|')
        {
            k = -1, m = 1;
            if (a[i] >= '0' && a[i] <= '9')
            {
                k = a[i++] - '0';
                for (;; i++)
                {
                    if (a[i] != '-' && a[i] != '.')
                        break;
                    if (a[i] == '-')
                        m *= 2;
                    if (a[i] == '.')
                    {
                        m *= 1.5;
                        if (a[i + 1] == '-')
                            return cout << "error" << endl, 0;
                    }
                }
                ans += m;
                for (int j = 1; j <= m; ++j)
                    b[l++] = k;
            }
            if (k == -1)
                return cout << "error" << endl, 0;
        }
        else
        {
            if (n != -1)
                if (n == 0)
                    n = ans;
                else if (n != ans)
                    n = -1;
            ans = 0;
            i++;
        }
    }
    cout << n << endl;
    for (int i = 0; i < l; i++)
        cout << b[i];
    return 0;
}