#include <bits/stdc++.h>
#define int long long 
using namespace std;

int getn(int k)
{
    int ans = 0;

    // 数位分离板子？？！

    while (k)
    {
        ans += k % 10;
        k /= 10;
    }
    return ans;
}

signed main()
{
#ifdef LOCAL
    LOCALfo
#endif
        ;
    int n;
    int sum = 0;
    cin >> n;

    for (int i = n - 200; i <= n; i++)
        if (i + getn(i) == n)
            sum++;

    cout << sum << endl;

    for (int i = n - 200; i <= n; i++)
        if (i + getn(i) == n)
            cout << i << endl;

    return 0;
}