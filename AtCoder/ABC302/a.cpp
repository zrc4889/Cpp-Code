#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
    // start here..

    int a, b;
    cin >> a >> b;

    int times;
    times = a / b;

    if (a % b) times ++;

    cout << times << endl;
    return 0;
}