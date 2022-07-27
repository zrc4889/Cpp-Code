#include <bits/stdc++.h>
using namespace std;

signed main()
{
    freopen("cut.in","r",stdin);
    freopen("cut.out","w",stdout);
    cin >> n >> m;
    aa = bb = 1;
    for (int i= 1;i<n;++i) cin>>a[i];
    for(int j=1;j<m;++j) cin >> b[i];
    sort(a+1,a+n,cmp);
    sort(b+1,b+n,cmp);
    
    int i=1,j=1;

    while (i<n || j<m)
    {
        if (i>=n||b[j]>a[i]) ans+=b[j++]*bb, ++aa;
        else ans+=a[i++]*aa,++bb;
    }
    // sort()
}