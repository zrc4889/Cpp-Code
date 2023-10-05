#include <bits/stdc++.h>
using namespace std;

const int _ = 2e3 + 10;

string a, b;
int la, lb;
int f[_][_];

int main()
{
    
    cin >> a >> b;
    la = a.size(), lb = b.size();
    a = "#" + a, b = "#" + b;

    for (int i = 1; i <= la; ++i) f[i][0] = i;
    for (int j = 1; j <= lb; ++j) f[0][j] = j;

    for (int i = 1; i <= la; ++i)
        for (int j = 1; j <= lb; ++j)
        {
            if (a[i] == b[j])
                f[i][j] = f[i - 1][j - 1];
            else 
                f[i][j] = min(f[i - 1][j - 1], min(f[i - 1][j], f[i][j - 1])) + 1;
        }
    cout << f[la][lb] << '\n';
    return 0;
}