#include <bits/stdc++.h>
using namespace std;

string a, b;
string ans;
int f[3002][3002];

int main()
{
    cin >> a >> b;

    a = '#' + a, b = '#' + b;
    int n = a.size(), m = b.size();

    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else
                f[i][j] = max(f[i - 1][j], f[i][j - 1]);

    int i = n, j = m;
    while (f[i][j] > 0)
    {
        if (a[i] == b[j] && a[i] != '\0' && b[j] != '\0')
            ans.push_back(a[i]), i --, j --;
        else if (f[i][j] == f[i - 1][j]) i--;
        else j--;
    }

    reverse(ans.begin(), ans.end());
    cout << ans << endl;
    return 0;
}