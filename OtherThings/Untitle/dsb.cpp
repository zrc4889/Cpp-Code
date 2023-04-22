#include <bits/stdc++.h>
using namespace std;

int main()
{
    // #ifdef LOCAL
    // LOCALfo
    // #endif
    // ;
    freopen("fuck.out", "w", stdout);
    int a = 0;
    int fuck = 0;
    for (int i = 1; i <= 1000; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // a += i;
            a = i;
            int tmp = a;
            int f;
            while (a != 0)
            {
                f = a % 10;
                a /= 10;
                fuck += f;
                cout << fuck << ',';
            }
            // cout << a << ", ";
        }
    }
    return 0;
}