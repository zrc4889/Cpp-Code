#include <bits/stdc++.h>
#define int long long 
using namespace std;

signed main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int s1 = a * a;
    int s2 = b * c;
    if (s1 > s2) cout << "Alice";
    else cout << "Bob";
    return 0;
}