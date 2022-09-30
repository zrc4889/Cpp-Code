#include <bits/stdc++.h>
using namespace std;
const int _ = 21;
int a[_][_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        a[i][i] = 1;
        a[i][1] = 1;
    }
    for (int i = 3; i <= n; i++)
        for (int j = 2; j <= i - 1; j++)
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
            cout << a[i][j] << ' ';
        cout << endl;
    }

    return 0;
}