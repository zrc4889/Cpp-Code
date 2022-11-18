#include <bits/stdc++.h>
using namespace std;
const int _ = 1e6 + 10;
double a[_], b[_];
double sum;
int n, p;

bool check(double k)
{
    double q = p * k;
    sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] * k <= b[i])
            continue;
        sum += (a[i] * k - b[i]);
    }
    return sum <= q;
}

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    cin >> n >> p;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        sum += a[i];
    }
    if (sum <= p)
    {
        cout << -1.000000 << endl;
        return 0;
    }
    double l = 0, r = 1e10;
    while (r - l > 1e-6)
    {
        double mid = (l + r) / 2;
        if (check(mid))
            l = mid;
        else
            r = mid;
    }
    if (check(l))
        printf("%.6f", l);
    else
        printf("%.6f", r);
    return 0;
}