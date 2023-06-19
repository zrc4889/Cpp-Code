/*������ٳ�ʱ,�����������⣬���ֿ�ͨ����ʵ���ϲ����㵥���ԣ����ɶ��֡� 
  ����6 199   1 1 100 100 1 1,�������ȷ�3��,���з�4��,ʵ���Ϸ�2�μ��ɡ� 
  ������Բ���RMQ+�Ż��������䳤�Ⱥ��ϴ�һ��ʱ���������¼��㣬ֱ���ۼ���һ��������ֵ���ɡ� 
*/ 
#include<cstdio>
#include<algorithm>
using namespace std;
const int N=200010;
int a[N];
int n,k;
int F[N][20],lb[N];

void Initlog(){
	lb[0]=-1;
    for(int i=1;i<=N;i++)
        lb[i]=lb[i-1]+(i&(i-1)?0:1);
}

void ST(int n){
    for(int i=1;i<=n;i++)
		F[i][0]=a[i];
    for(int j=1;j<=lb[n];j++)
        for(int i=1;i<=n-(1<<j)+1;i++)
            F[i][j]=max(F[i][j-1],F[i+(1<<(j-1))][j-1]);
}

int RMQ(int l,int r){
    int k=lb[r-l+1];
    return max(F[l][k],F[r-(1<<k)+1][k]);
}

void solve(){
	ST(n);
    int i,j=0,t,ans=0,pre=0;
    for(i=1;i<=n;i++){
        t=n/i;
        if(pre!=t){//������䳤�Ⱥ��ϴ�һ�������ó�ʼ����ֱ���ۼ���һ��������ֵ���� 
            j=0;
            ans=0;
        }
        for(;j<i;j++)
            ans+=RMQ(t*j+1,j*t+t);
        pre=t;
        if(ans>k) break;
    }
    if(i>n)
		printf("-1\n");
    else
    	printf("%d\n",i);
}

int main(){
    Initlog();
	while(scanf("%d%d",&n,&k)){
        if(n==-1&&k==-1)
        	break;
        for(int i=1;i<=n;i++)
            scanf("%d",&a[i]);
		solve();
    }
    return 0;
}
