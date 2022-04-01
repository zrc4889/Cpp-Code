#include <bits/stdc++.h>
using namespace std;
int a[1005];
int n;
int main()
{
    cin>>n;
    int sum=0;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        if (a[i]>10)
        {
            sum+=a[i]-10;
        }
    }
    cout<<sum;
    return 0;
}