#include <bits/stdc++.h>
using namespace std;

const int _ = 1e5 + 10;
int a[_], n;

int main()
{
    cin >> n;
    
    for (int i = 1; i <= n; ++i) 
    {
        int t;
        cin >> t;
        a[t] ++;
    }

    int ans = 1;
    for (int i = 1; i <= n; ++i)
    {
        ans = ans * pow(a[i - 1], a[i]);
    }

    cout << ans << endl;

    return 0;
}