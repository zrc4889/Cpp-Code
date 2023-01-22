#include <bits/stdc++.h>
using namespace std;

int pos[114514];

int main()
{
    // start here..

    int n;
    string a;
    cin >> n >> a;

    // int cnt = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (a[i] == 'n' && a[i + 1] == 'a')
            pos[i] = 1;
    }

    for (int i = 0; i < n; i++)
    {
        if (pos[i] == 1) cout << "ny";
        else cout << a[i];
    }
    return 0;
}