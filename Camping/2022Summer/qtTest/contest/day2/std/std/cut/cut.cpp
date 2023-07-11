#include <bits/stdc++.h>
using namespace std;
long long ans = 0;
long long dh[2000], ds[2000];
bool cmp(int a, int b) { return a > b; }
int main()
{
    freopen("cut.in", "r", stdin);
    freopen("cut.out", "w", stdout);
    long long n, m;
    scanf("%lld %lld", &n, &m);
    for (int i = 1; i < n; ++i)
    {
        cin >> dh[i];
    }
    for (int i = 1; i < m; ++i)
    {
        cin >> ds[i];
    }
    sort(dh + 1, dh + n, cmp);
    sort(ds + 1, ds + m, cmp);

    long long i = 1, j = 1;
    while (i < n && j < m)
    {
        if (dh[i] >= ds[j])
        {
            ans += dh[i] * j;
            // cout<<ans<<endl;
            ++i;
        }
        else
        {
            ans += ds[j] * i;
            // cout<<ans<<endl;
            ++j;
        }
    }
    while (i < n)
    {
        ans += dh[i] * m;
        ++i;
    }
    while (j < m)
    {
        ans += ds[j] * n;
        ++j;
    }

    cout << ans << endl;

    return 0;
}