#include <bits/stdc++.h>
using namespace std;
int a[1000000], b[1000000], c[1000000], d[1000000];
int main()
{

    int n;
    cin >> n;
    // ai bi ci di
    a[1] = 8, b[1] = 1, c[1] = 1, d[1] = 0;
    for (int i = 2; i <= n; ++i)
    {

        a[i] = (a[i - 1] * 8)  % 100000007 ; 
        b[i] = (b[i - 1] * 9 + a[i - 1] * 1) % 100000007  ;
        c[i] = (c[i - 1] * 9 + a[i - 1] * 1) % 100000007 ;
        d[i] = (d[i - 1] * 10 + b[i - 1] * 1 + c[i - 1] * 1) % 100000007 ;
    }
    cout << d[n] % 100000007 << endl;
    return 0;
}