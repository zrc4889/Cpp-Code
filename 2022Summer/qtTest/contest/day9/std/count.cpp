#include <iostream>
#include <stdio.h>
using namespace std;
int n,m,k, dp[999][999];
int main(){
	freopen("count.in","r",stdin);
	freopen("count.out","w",stdout);
	scanf("%d",&k);
	while(k--){
    	scanf("%d%d",&m,&n);
		for(int i=0;i<=300;i++)
		    for(int j=0;j<=300;j++)
		        dp[i][j]=0;
	    dp[0][0]=1;
	    for(int i=0;i<=m;i++)
		    for(int j=i;j<=m;j++)
		        for(int k=1;k<=n;k++)
		            dp[j][k]=(dp[j][k]+dp[j-i][k-1])%100000007;
    	printf("%d\n",dp[m][n]);
	}
    return 0;
}
