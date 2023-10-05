#include <bits/stdc++.h>
using namespace std;

const int _ = 101;
int a[_];
int maxx = -1;
int cnt = 0;

int main()
{

    int n;
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }

    for (int i = 1; i <= n; ++i)
        if (a[i] == maxx)
            ++cnt;

    if (cnt == 1 && a[1] == maxx)
        return cout << 0 << endl, 0;
    else
        return cout << maxx + 1 - a[1] << endl, 0;

    return 0;
}