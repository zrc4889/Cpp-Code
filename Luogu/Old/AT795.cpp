#include <bits/stdc++.h>
using namespace std;
long long a[1000000 + 10];
int main()
{
    int n, k;
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a + 1, a + n + 1);
    double c = 0;
    for (int i = n - k + 1; i <= n; i++)
    {
        c = (c + a[i]) / 2.0;
    }
    printf("%.6f",c);
    return 0;
}