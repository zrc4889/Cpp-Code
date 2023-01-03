#include <bits/stdc++.h>
using namespace std;

int main()
{
    // start here..
    string a;
    cin >> a;
    int n, m;
    n = m = 0;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == '1')
            n++;
        else if (a[i] == '0')
            m++;
    }
    cout << min(n, m) * 2 << endl;
    return 0;
}