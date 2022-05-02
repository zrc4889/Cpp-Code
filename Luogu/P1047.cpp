#include <bits/stdc++.h>
using namespace std;
const int N = 1e6;
int a[N], l, m, sum;
int main()
{
    sum = 0;
    cin >> l >> m;
    for (int i = 1; i <= m; i++)
    {
        int z, x;
        cin >> z >> x;
        for (int j = z; j <= x; j++)
        {
            a[j] = 1;
        }
    }
    for (int i = 0; i <= l; i++)
    {
        if (!a[i])
            sum++;
    }
    cout << sum << endl;
    return 0;
}