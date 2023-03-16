#include <bits/stdc++.h>
using namespace std;

int main()
{
    cin >> n >> d;
    for (int i = 1; i <= n; ++i)
    {
        scanf("%d", &x[i]);
    }
    sort(x + 1, x + n + 1);
    for (int i = 1; i <= n; ++i)
    {
        int l = i, r = n;
        while (l + 1 < r)
        {
            int mid = (l + r) / 2;
            if (x[mid] <= x[i] + d)
            {
                l = mid;
            }
            else
            {
                r = mid;
            }
        }
        if (x[r] <= x[i] + d) ans += r-i;
        else ans += l-i;
        
    }
    cout<<ans<<endl;
    return 0;
}