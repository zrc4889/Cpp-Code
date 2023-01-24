#include <bits/stdc++.h>
using namespace std;

int a[114514];

int main()
{
    // start here..
    int n;
    cin >> n;
    int cnt = 0;

    a[0] = 0;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    for (int i = 2; i <= n; i++)
    {
        if (a[i - 1] <= a[i] && a[i] <= a[i + 1])
            cnt += 2;
    }

    cout << cnt << endl;

    return 0;
}