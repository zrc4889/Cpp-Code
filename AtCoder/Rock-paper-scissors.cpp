#include <bits/stdc++.h>
using namespace std;

int x,y;
int main()
{
    cin>>x>>y;
    if (x==y) cout<<x;
    if (x!=y)
    {
        if (x==0&&y==1) cout<<2;
        if (x==1&&y==2) cout<<0;
        if (x==0&&y==2) cout<<1;
        
        if (y==0&&x==1) cout<<2;
        if (y==1&&x==2) cout<<0;
        if (y==0&&x==2) cout<<1;
    }
    return 0;
}