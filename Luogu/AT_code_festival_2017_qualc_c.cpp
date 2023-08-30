#include <bits/stdc++.h>
using namespace std;

string a;
int ans = 0;

int main()
{
    cin >> a;

    int l = 0, r = a.size() - 1;
    while (l <= r)
    {
        if (a[l] == a[r])
        {
            l++, r--;
            continue;
        }
        if (a[l] == 'x')
        {
            l++;
            ans++;
        }
        else if (a[r] == 'x')
        {
            r--;
            ans++;
        }
        else
            return cout << -1 << endl, 0;
    }

    cout << ans << endl;
    return 0;
}