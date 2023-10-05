#include <bits/stdc++.h>
using namespace std;

const int _ = 100;

string a, b;
int la, lb;
int px, py;
int f[_][_];
int Max = -1;

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
            else f[i][j] = 0;
            
            if (Max < f[i][j])
                Max = f[i][j], px = i;
        }
    cout << Max << '\n';
    
    px = px - Max + 1;
    while (Max --)
        cout << a[px ++];

    return 0;
}