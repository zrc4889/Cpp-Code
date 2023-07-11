#include <bits/stdc++.h>
using namespace std;
// 滚动记录法
int main()
{
    int n,t,x,y=0,ans=0;
    cin>>n>>t>>x;
    ans = t; // 第一个人肯定要开
    for (int i=1;i<n;i++)
    {
        cin>>y;
        if (y-x>=t) ans+=t; // 如果时长差超过了开门时间，重新开门t
        else ans+=y-x; // 没超过，加上多出的部分
        x=y;
    }
    cout<<ans<<endl;
    return 0;
}