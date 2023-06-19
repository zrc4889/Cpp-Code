#include<cstdio>//���ر��������ֽ��������������֡������Ʋ�֡������Ż� 
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=1005;
const int maxc=100005;
int cash,n,ans;
int c[maxn],v[maxn];//c[i]��v[i]�ֱ��ʾ��i��Ǯ�ҵ���������ֵ
bool dp[maxc];//dp[j]��ʾ�Ƿ��ܹ�ƴ�����j
int num[maxc];//num[j]��ʾ���Ϊjʱ���˶��ٸ���i��Ǯ��

void multi_knapsack3(int n,int W){//�����Ż� 
	ans=0;
	dp[0]=1;
	for(int i=1;i<=n;i++){
        memset(num,0,sizeof(num));//ͳ������ 
        for(int j=v[i];j<=W;j++){
            if(!dp[j]&&dp[j-v[i]]&&num[j-v[i]]<c[i]){
                dp[j]=1;
                num[j]=num[j-v[i]]+1;
                ans=max(ans,j);
            }
        }
    }
}

int main(){
    while(~scanf("%d%d",&cash,&n)){
        for(int i=1;i<=n;i++)
            scanf("%d%d",&c[i],&v[i]);
        memset(dp,0,sizeof(dp));
        multi_knapsack3(n,cash);
        printf("%d\n",ans);
    }
    return 0;
}
