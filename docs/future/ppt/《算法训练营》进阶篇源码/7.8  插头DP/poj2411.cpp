#include<cstdio>
#include<cstring>
#include<algorithm>
#define LL long long
using namespace std;
int n,m;
LL dp[2][1<<12]; //��ά��������
 
int main(){
    while(~scanf("%d%d",&n,&m),n+m){
		memset(dp,0,sizeof(dp));
        LL *cur,*next;
        cur=dp[0];next=dp[1];
        cur[0]=1;
        for(int i=n-1;i>=0;i--)
            for(int j=m-1;j>=0;j--){
            	for(int S=0;S<(1<<m);S++){
                	if((S>>j)&1)//������ܷţ�ֱ��ת��
                        next[S]=cur[S&~(1<<j)];
                    else{
                    	LL tmp=0;//�ӵ㣬�������Ͳ�Ҫ���ⶨ��Ϊint 
                        if(j+1<m&&!(S>>(j+1)&1))//���Ժ��
                            tmp+=cur[S|1<<(j+1)];
                        if(i+1<n)//��������
                        	tmp+=cur[S|1<<j];
                        next[S]=tmp;
                    }
                }
                swap(cur,next);
			}       
        printf("%lld\n",cur[0]);
    }
    return 0;
}
