#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
typedef unsigned long long LL;

const int c[]={0,2,3,5,7};
LL f[25],s[25];
int a[25];
LL n;
int Test,st;

int main()
{
	freopen("number.in","r",stdin);
	freopen("number.out","w",stdout);
	f[0]=1;
	for (int i=1;i<=20;++i){
		f[i]=f[i-1]<<2;
		s[i]=f[i];
		if (i>1) s[i]+=s[i-1];
	}

	for (scanf("%d",&Test);Test--;){
		cin>>n;
		st=0;
		for (int i=20;i>=1 && !st;--i){
			a[i]=0;
			for (int j=4;j;--j)
			if (s[i-1]+f[i-1]*(j-1)<n){
				st=i;
				a[i]=j;
				n-=s[i-1]+f[i-1]*(j-1);
				break;
			}
		}
		for (int i=st-1;i>=1;--i){
			a[i]=0;
			for (int j=4;j;--j)
			if (f[i-1]*(j-1)<n){
				a[i]=j;
				n-=f[i-1]*(j-1);
				break;
			}
		}
		for (int i=20;i>=1;--i)
		if (a[i]) printf("%d",c[a[i]]);
		puts("");
	}


	return 0;
}
