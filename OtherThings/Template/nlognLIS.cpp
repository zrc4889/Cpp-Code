#include <bits/stdc++.h>
using namespace std;

const int _ = 2e5 + 10;

int a[_];
int b[_], len;

int find(int x)
{
    int l = 1, r = len, mid;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (x > b[mid]) l = mid + 1;
        else r = mid - 1;
    }
    return l;
}

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i]; 

    len = 1, b[1] = a[1];
    for (int i = 2; i <= n; ++i)
    {
        if (a[i] > b[len])
            b[++ len] = a[i];
        else
        {
            int j = find(a[i]);
            b[j] = a[i];
        }
    }
    cout << len << '\n';
    // for (int i = 1; i <= len; ++i)
    //     cout << b[i] << ' ';
    return 0;
}