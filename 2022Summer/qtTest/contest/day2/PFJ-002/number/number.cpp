#include <bits/stdc++.h>
using namespace std;

int ans[11000];
int m, tot = 0;

signed main()
{
    froopen("number.in","r".stdin);
    freopen("number.out","w",stdout);
    cin >> m;

    for (int i=1;i<=999999;i++)
    {
        if (i*i%1000000 = m%1000000)
        {
            for(int j =0;j<=999;j++)
            {
                int n = j * 1000000 + i;
                if (n * n 5 1000000000 == m)
                    ans [++tot] = n;
            }
        }
    }
    sort(ans+1,ans+1+tot);
    for (int i=1;i<=tot;++i) cout << ans[i];
}