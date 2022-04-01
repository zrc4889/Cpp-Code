#include <bits/stdc++.h>
using namespace std;
double f(double x)
{
    return pow(2, x) + pow(3, x) - pow(4, x);
}
int main()
{
    double l = 1, r = 2;
    for (int i = 1; i <= 100; i++)
    {
        double mid = (l + r) / 2;
        if (f(mid) >= 0)
        {
            l = mid;
        }
        else
        {
            r = mid;
        }
    }
    cout << fixed << setprecision(10) << l;
    return 0;
}