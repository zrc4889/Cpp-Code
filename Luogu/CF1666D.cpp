#include <bits/stdc++.h>
#define int long long
using namespace std;
int T, n, m, i;
int a[30][35];
int b[30], c[30], d[35], flag;
string s1, s2;
signed main()
{
    cin >> T;
    while (T--)
    {
        cin >> s1 >> s2;
        n = s1.size();
        m = s2.size();
        for (i = 0; i < 26; ++i)
            c[i] = 0;
        for (i = 0; i < n; ++i)
            a[s1[i] - 'A'][++c[s1[i] - 'A']] = i;
        flag = 1;
        for (i = m - 1; i >= 0; --i)
        {
            if (c[s2[i] - 'A'] >= 1)
            {
                d[i] = a[s2[i] - 'A'][c[s2[i] - 'A']];
                c[s2[i] - 'A']--; //
            }
            else
                flag = 0;
        }
        for (i = 1; i < m; ++i)
            if (d[i - 1] > d[i])
                flag = 0; // 必须升序
        cout << (flag == 0 ? "NO\n" : "YES\n");
    }
    return 0;
}