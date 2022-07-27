#include <bits/stdc++.h>
using namespace std;
int a[3];
int n, x, num;
int main()
{

    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[2];
        if (a[2] >= a[1])
        {
            x++;
            num = max(num, x);
        }
        else
            x = 1;
        a[1] = a[2];
    }

    cout << num;

    return 0;
}