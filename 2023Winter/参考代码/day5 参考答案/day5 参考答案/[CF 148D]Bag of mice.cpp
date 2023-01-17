#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
const int MAXN = 1005;
double dp[MAXN][MAXN];
int main()
{
    int w,b;
    scanf("%d %d",&w,&b);
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=w;i++)    dp[i][0] = 1.0;
    for(int i=1;i<=w;i++)
        for(int j=1;j<=b;j++)
        {
            dp[i][j] += (double)i / (i+j);
            if(i>=1 && j>=2)
                dp[i][j] += (double)j / (i+j) * (j-1) / (i+j-1) * i / (i+j-2) * dp[i-1][j-2];
            if(j>=3)
                dp[i][j] += (double)j / (i+j) * (j-1) / (i+j-1) * (j-2) / (i+j-2) * dp[i][j-3];
        }
    printf("%.9lf\n",dp[w][b]);
}