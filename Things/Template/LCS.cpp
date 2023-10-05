#include <bits/stdc++.h>
using namespace std;

const int _ = 100;

string a, b;
int la, lb;
int f[_][_], ans[_];
int Max = -1, cnt = 0;

int main()
{
    cin >> a >> b;
    la = a.size(), lb = b.size();
    a = "#" + a, b = "#" + b;

    for (int i = 1; i <= la; ++i)
        for (int j = 1; j <= lb; ++j)
        {
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1] + 1;
            else f[i][j] = max(f[i - 1][j], f[i][j - 1]);

            if (Max < f[i][j])
                Max = f[i][j], ans[++ cnt] = i;
        }

    cout << Max << '\n';

    for (int i = 1; i <= cnt; ++i)
        cout << a[ans[i]];

    return 0;
}