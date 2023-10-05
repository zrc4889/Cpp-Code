#include <bits/stdc++.h>
using namespace std;

const int _ = 101;
int a[_];

int main()
{
    // start here..
    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
        cin >> a[i];

    for (int i = 1; i < n; ++i)
    {
        int l = a[i], r = a[i + 1];
        if (l < r)
        {
            for (int x = l; x < r; ++x)
                cout << x << ' ';
        }
        if (l > r)
        {
            for (int x = l; x > r; --x)
                cout << x << ' ';
        }
    }
    cout << a[n] << endl;
    cout << endl;
    return 0;
}