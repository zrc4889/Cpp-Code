#include <bits/stdc++.h>
using namespace std;

double f[1001];
int n;
int main()
{
    // start here..

    int T;

    cin >> T;

    // init();

    while (T--)
    {
        cin >> n;

        f[n] = 0;
        for (int i = n - 1; i >= 0; i--)
            f[i] = f[i + 1] + 1.0 * n / (n - i);
        printf("%.2lf\n", f[0]);
    }

    return 0;
}