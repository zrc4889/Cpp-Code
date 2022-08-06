#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <string.h>
#include <math.h>
using namespace std;
#define LL long long
#define MXL 1000005
#define MXX 27
LL n,m,total,cnt[MXL][MXX],final[MXL];
int length1,length2;
char num[MXL],num2[MXL];
LL gcd(LL a,LL b){return b==0?a:gcd(b,a%b);}
void solve()
{
	scanf("%lld%lld\n%s\n%s\n",&n,&m,num,num2);
	length1=strlen(num);length2=strlen(num2);
	int g=(int)gcd((int)length1,(int)length2);
	for(int i=0;i<length1;++i) {++cnt[i%g][num[i]-'a'];++final[i%g];}
	for(int i=0;i<length2;++i)
	   total+=final[i%g]-cnt[i%g][num2[i]-'a'];
    total=total*(gcd(n,m));
    printf("%lld\n",total);
}
int main()
{
	freopen("distance.in", "r", stdin);
	freopen("distance.out", "w", stdout);
	solve();
    return 0;
}
