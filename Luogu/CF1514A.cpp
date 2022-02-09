#include <bits/stdc++.h>
using namespace std;

void f()
{
    int n;
    for (int i = 1; i <= n; ++i)
    {
        int x;
        cin >> x;
        int sq = sqrt(x);
        if (sq * sq == x)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        f();
    return 0;
}