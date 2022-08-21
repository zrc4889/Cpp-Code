#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n, x;
    int cnt = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++)
    {
        int t = i;
        while (t)
        {
            int tmp = t % 10;
            t /= 10;
            if (tmp == x)
                cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}