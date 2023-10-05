#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    string a;
    cin >> a;
    int ans = 0;
    int n = a.length();
    for (int i = 0; i < n; i++)
        if (a[i] == '0')
            ans++;
    if (ans % 2 == 0)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}