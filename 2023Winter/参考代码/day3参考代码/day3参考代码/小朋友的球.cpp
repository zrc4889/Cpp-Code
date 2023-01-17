#include <cstdio>
#include <algorithm>
#define maxn 110
using namespace std;
struct bignum
{
	int num[500], len;
	bignum(){for(int i=0;i<500;i++)num[i]=0;len=1;}
	int& operator[](int x){return num[x];}
	void show()
	{
		int i;
		for(i=len;i;i--)printf("%d",num[i]);
	}
}f[maxn][maxn];
bignum operator+(bignum a, bignum b)
{
	bignum ans;
	int i;
	ans.len=max(a.len,b.len);
	for(i=1;i<=ans.len;i++)ans[i]=a[i]+b[i];
	for(i=1;i<=ans.len;i++)ans[i+1]+=ans[i]/10,ans[i]%=10;
	if(ans[ans.len+1])ans.len++;
	return ans;
}
bignum operator*(bignum a, int b)
{
	bignum ans;
	int i;
	for(i=1;i<=a.len;i++)ans[i]=a[i]*b;
	for(i=1;i<500;i++)ans[i+1]+=ans[i]/10,ans[i]%=10;
	for(i=499;ans[i]==0;i--);ans.len=i;
	return ans;
}
int main()
{
	int N, M, i, j;
	f[0][0].len=1;f[0][0][1]=1;
	for(i=1;i<=100;i++)
		for(j=1;j<=i;j++)
		{
			f[i][j]=f[i-1][j-1]+f[i-1][j]*j;
		}
	for(;~scanf("%d%d",&N,&M);printf("\n"))f[N][M].show();
	return 0;
}