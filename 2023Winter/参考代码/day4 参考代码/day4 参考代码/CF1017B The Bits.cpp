#include<bits/stdc++.h>
#define N 100001

using namespace std;
char a[N],b[N];
int n;
int main()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++) cin>>a[i];
    for(int i=1;i<=n;i++) cin>>b[i];
    int s0=0,s11=0;
    long long ans=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]=='0') s0++;
        else if(b[i]=='1') s11++;
    }
    for(int i=1;i<=n;i++) if(b[i]=='0')
    {
        if(a[i]=='0') ans+=s11;
        else ans+=s0;
    }
    cout<<ans<<endl;
    return 0;
}