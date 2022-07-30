#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int f(int x, int step)
{
    if (step == n)
    {
        return x;
    }
    else
    {
        return x * f(x - 1, step + 1);
    }
}
signed main()
{
    cin >> n;
    cout << f(n, 1);
    return 0;
}