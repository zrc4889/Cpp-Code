#include <bits/stdc++.h>
using namespace std;
int a[100005];
int sum=0;
int main(){
    int n,x;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    cin>>x;
    int i = 0;
    while (sum>x)
    {
        if (i == n) i = 0;
        else i++;
        temp+=a[i];
        if (temp >=x) 
        {
            cout<<i;
            return 0;
        }
    }
}