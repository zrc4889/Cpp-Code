#include <bits/stdc++.h>
using namespace std;
int a[1999];
int b[1999];
int main()
{
    string q, w;
    cin >> q >> w;
    for (int i = 1; i <= 4; i++)
    {
        // cin >> a[i];
        a[i] = q[i] - '0';
    }
    for (int i = 1; i <= 4; i++)
    {
        // cin >> b[i];
        b[i] = w[i] - '0';
    }
    int sum1 = 0, sum2 = 0;
    for (int i = 1; i <= 4; i++)
    {
        if (a[i] == b[i])
        {
            sum1++;
        }
    }
    sort(a + 1, a + 1 + 4);
    sort(b + 1, b + 1 + 4);
    for (int i = 1; i <= 4; i++)
    {
        if (a[i] == b[i])
        {
            sum2++;
        }
    }
    sum2 = sum2 - sum1;
    cout << sum1 << endl
         << sum2;
    return 0;
}