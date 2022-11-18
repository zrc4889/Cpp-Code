#include <bits/stdc++.h>
using namespace std;
int a[20];
int n, sum, tmp, res1, res2;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    for (int i = 2; i <= 11; i++)
        a[i] = 4;
    a[10] = 16;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> tmp;
        a[tmp]--;
        sum += tmp;
    }

    int x = 21 - sum;

    for (int i = 2; i <= x; i++)
        res1 += a[i];
    for (int i = x + 1; i <= 11; i++)
        res2 += a[i];

    if (res2 < res1)
        return cout << "VUCI" << endl, 0;
    else
        return cout << "DOSTA" << endl, 0;
}