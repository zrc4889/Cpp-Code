#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    // 首先 奇数肯定不是
    cin >> n;
    if (n % 2)
        return cout << -1 << endl, 0;
    for (int i = 27; i >= 1; i--)
    {
        if (n == 0)
            return 0;
        if (n >= 1 << i)
        {
            n -= 1 << i;
            cout << (1 << i) << ' ';
        }
    }
    return 0;
}