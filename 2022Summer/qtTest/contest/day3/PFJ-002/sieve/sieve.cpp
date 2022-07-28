#include <bits/stdc++.h>
using namespace std;
#define int long long
// int a[INT_MAX];
bool Prime(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true; // 判断素数
}
int Find(int l, int r)
{

    int ans = 0;
    for (int i = l; i <= r; i++)
    {
        if (Prime(i))
        {
            ans++;
        }
    }
    return ans;
}
signed main()
{
    freopen("sieve.in","r",stdin);
    freopen("sieve.out","w",stdout);
    int t;
    cin >> t;
    int l, r;
    int res = 0;
    for (int i = 1; i <= t; i++)
    {
        cin >> l >> r;
        res += Find(l, r);
    }
    cout << res << endl;
    return 0;
}