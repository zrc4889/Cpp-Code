#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],i;
    for (i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+n+1);
	for(i=1;i<=n;i++)
    {
        if(a[i]>a[1])
        {
        	cout<<a[i];
            system("pause");
        	return 0;
		}
	}
    system("pause");
	cout<<"NO"; 
    return 0;
}