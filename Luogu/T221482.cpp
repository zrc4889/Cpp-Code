#include <bits/stdc++.h>
using namespace std;
int a[200], n, s1, s2;
int main()
{
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        int j = i, v = a[i];
        while (v >= 0)
        {
            if (j < 1 || a[j] != -1 && a[j] != v)
            {
                cout << -1 << endl;
                return 0;
            }
            a[j] = v;
            j--, v--;
        }
    }
    if (a[1] != -1 && a[1] != 0)
    {
        cout << -1 << endl;
        return 0;
    }
    a[1] = 0;
    for (int i = 1; i <= n; ++i)
        if (a[i] == 0)
            s1++;
        else if (a[i] == -1)
            s2++;
    cout << s1 << " " << s1 + s2 << endl;
    return 0;
}