#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (c > d)
        swap(c, d);
    if (a > c) cout << b - a;
    else cout << (a - c) + (b - d);
    // system("pause");
    return 0;
}