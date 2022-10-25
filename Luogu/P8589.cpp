#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    cin >> n;
    if (n % 4 == 1)
    {
        for (int i = 1; i <= n / 4; i++)
            cout << "0110";
        cout << 0 << endl;
    }
    else
        cout << -1 << endl;
    return 0;
}