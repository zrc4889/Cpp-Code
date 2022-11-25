#include <bits/stdc++.h>
using namespace std;
const int _ = 10001;
double a[_];
int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    double sum = 0;
    double maxx = 0, minx = 10;
    for (int i = 1; i <= n; i++)
    {
        double t;
        cin >> t;
        sum += t;
        maxx = max(maxx, t);
        minx = min(minx, t);
    }

    sum -= maxx;
    sum -= minx;
    printf("%.2f", sum / (n - 2));
    return 0;
}