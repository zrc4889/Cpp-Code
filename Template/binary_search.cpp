#include <bits/stdc++.h>
using namespace std;

int main()
{
    double n;
    cin >> n;
    double l = -100, r = 100;
    for (int i = 0; i < 100; ++i)
    {
        double mid = (l + r) / 2;
        if (mid * mid * mid >= x)
        {
            r = mid;
        }
        else
        {
            l = mid;
        }
    }
    cout << l;
}