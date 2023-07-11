#include <bits/stdc++.h>
#define int long long
using namespace std;
signed main()
{
    int x,k;
    cin >> x >> k;

    if (!k)
        return cout << x << endl, 0;

    int t = x, cnt = 0;
    while (t != 1)
    {
        t++; 
        if (t % 3 == 0)
            t /= 3;
        cnt++;
        if (cnt == k)
            return cout << t << endl, 0;
    }
    
    if ((k - cnt) % 2 == 1)
        t++;
    cout << t << endl;
    return 0;
}
