#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 1;

int fup[_], fdown[_];
int h[_];

int main()
{
    // start here..

    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> h[i];

    fup[1] = fdown[n] = 1;

    for (int i = 2; i <= n; i++)
    {
        if (h[i] >= h[i - 1])
            fup[i] = fup[i - 1] + 1;
        else
            fup[i] = 1;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        if (h[i] >= h[i + 1])
            fdown[i] = fdown[i + 1] + 1;
        else
            fdown[i] = 1;
    }

    int ans = -1;
    for (int i = 1; i <= n; i++)
        ans = max(ans, fup[i] + fdown[i] - 1); // 山峰算了两次
    cout << ans << endl;

    return 0;
}