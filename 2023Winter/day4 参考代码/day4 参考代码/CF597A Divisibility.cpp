#include<stdio.h>
typedef long long ll;
ll abs(ll x)
{
    return x>0?x:-x;
}
int main()
{
    ll k,a,b;
    while(~scanf("%I64d%I64d%I64d",&k,&a,&b))
    {
        ll ans;
        if(a>0&&b>0)
        {
            ans=abs(b/k)-abs((a-1)/k);
        }
        else if(a<0&&b<0)
        {
            ans=abs(a/k)-abs((b+1)/k);
        }
        else
        {
            ans=abs(a/k)+abs(b/k)+1;
 
        }
        printf("%I64d\n",ans);
    }
    return 0;
}