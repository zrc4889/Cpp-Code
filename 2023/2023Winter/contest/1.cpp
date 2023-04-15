#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    // start here..

    int n, a, b;
    cin >> n >> a >> b;

    // 容斥原理

    cout << (a + b) - n << endl;

    return 0;
}