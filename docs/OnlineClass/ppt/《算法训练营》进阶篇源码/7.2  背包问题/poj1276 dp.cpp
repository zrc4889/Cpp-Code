#include<cstdio>//�������ر��������ֽ��������������֡������Ʋ�֡������Ż� 
#include<cstring>
#include<algorithm>
using namespace std;
const int maxn=1005;
const int maxc=100005;
int cash,n;
int c[maxn],v[maxn];//c[i]��v[i]�ֱ��ʾ��i��Ǯ�ҵ���������ֵ
int dp[maxc];//dp[j]��ʾ������jʱ�ܹ�ƴ���������

void multi_knapsack1(int n,int W){//������� ��ʱ������ 
    for(int i=1;i<=n;i++)
    	for(int k=1;k<=c[i];k++)//��һ��ѭ�� 
			for(int j=W;j>=v[i];j--)
				dp[j]=max(dp[j],dp[j-v[i]]+v[i]);
}

void multi_knapsack2(int n,int W){//�����Ʋ�� 
    for(int i=1;i<=n;i++){
		if(c[i]*v[i]>=W){//ת����ȫ���� 
            for(int j=v[i];j<=W;j++)
                dp[j]=max(dp[j],dp[j-v[i]]+v[i]);
        }
        else{
            for(int k=1;c[i]>0;k<<=1){//�����Ʋ��
	            int x=min(k,c[i]);
	            for(int j=W;j>=v[i]*x;j--)//ת��01���� 
	                dp[j]=max(dp[j],dp[j-v[i]*x]+x*v[i]);
	            c[i]-=x;
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
        printf("%d\n",dp[cash]);
    }
    return 0;
}
