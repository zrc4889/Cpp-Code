#include<bits/stdc++.h>
using namespace std;
double a[8],ans=1,sum;
int main()
{
	for(int i=1;i<=7;i++) scanf("%lf",&a[i]),sum+=a[i];
	for(int i=1;i<=6;i++)
	{
		ans*=a[i];
		ans/=(sum-i+1);
	}
	ans*=5040;
	ans*=a[7];
	printf("%.3lf",ans);
	return 0;
}
 