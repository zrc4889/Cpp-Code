#include <bits/stdc++.h>
using namespace std;

signed main()
{
    string a;
    cin >> a;
    int size = a.length();
    for (int i = 0; i < size; i++)
    {
        a[i] = toupper(a[i]);

        // else
        // cout << a[i];
    }
    cout << a << endl;
    return 0;
}