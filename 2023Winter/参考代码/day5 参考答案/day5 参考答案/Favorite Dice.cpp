#include <bits/stdc++.h>

using namespace std;
const int maxn = 1005;
int T,n;
double f[maxn];//f[i] -> 有了i个面，变成拥有n个面的期望
int main()
{
	cin>>T;
	while (T--){
		cin>>n;
		f[n]=0;
		for (int i=n-1;i>=0;--i)	
			f[i]=f[i+1]+1.0*n/(n-i);
			
		printf("%.2lf\n",f[0]);
	}
	return 0;
}
