#include<bits/stdc++.h>
using namespace std;
int p[1010],len,n,sum,k;

bool prime(int num)
{
    if(num<2) return 0;
    for (int i = 2; i * i <= num; ++i)
        if (num % i == 0) return 0;
    return 1;
}
int main()
{
    ios::sync_with_stdio(false);
    cin>>n>>k;
    for(int i=2;i<=n;i++)
    {
        if(prime(i))
          p[++len]=i;
    }
    for(int i=2;i<=len;i++)
    {
        if(prime(p[i-1]+p[i]+1) and p[i-1]+p[i]+1<=n)
            sum++; 
    }
    cout<<(sum>=k?"YES":"NO");
    return 0;
}