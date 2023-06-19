#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
#define LL long long
LL dp[2][1<<24];//��¼������ 
int state[2][1<<24];//��¼״̬��S=state[pre][s]��preΪǰһ�����ӱ�ǣ�sΪ״̬���,SΪ״̬ 
int total[2];//��¼״̬���� 
int pre,now;
int endx,endy;//��¼���һ�����ϰ����� 
bool map[15][15];
int m,n;
LL ans;
const int HASH=40013;//�ӵ㣡����ϣֵ̫С�ᳬʱ��4λ������ʱ��m<=12,��30013,100003��
int Hash[HASH];//��¼S��Ӧ�Ĺ�ϣֵx��״̬���
 
void HashIn(int S,LL num){//��ϣ���� 
	int x=S%HASH;
	while(~Hash[x]&&state[now][Hash[x]]!=S){//����̽�� 
		x++;
		x%=HASH;
	}
	if(Hash[x]==-1){//δ�ҵ�������hash���� 
		dp[now][total[now]]=num;
		state[now][total[now]]=S;
		Hash[x]=total[now];//��¼״̬���
		total[now]++;
	}
	else//�ҵ����ۼӷ����� 
		dp[now][Hash[x]]+=num;
}
 
void init(){//��ʼ����ͼ 
	memset(map,0,sizeof(map));
	endx=-1;//���һ�����ϰ�����
	for(int i=0;i<n;i++){
		char str[200];
		scanf("%s",str);
		for(int j=0;j<m;j++){
			if(str[j]=='*')
				map[i][j]=0;
			else if(str[j]=='.'){
				map[i][j]=1;
				endx=i;//���һ�����ϰ�����
				endy=j;
			}
		}
	}
}
 
//λ���㣬ȡS������l�ĵ�pλ
int getV(int S,int p,int l=2){//4���ƣ�l=2��8���ƣ�l=3
	return (S>>(p*l))&((1<<l)-1);
}
 
//λ���㣬����S������l�ĵ�pλֵΪv
void setV(int& S,int p,int v,int l=2){
	S^=getV(S,p)<<(p*l);//��pλ��0
	S|=v<<(p*l);//��pλ��v 
}
 
void memsetnow(){//��չ�ϣ��
	memset(Hash,-1,sizeof(Hash));
	total[now]=0;
}
 
void solve(){//���� 
	if(endx==-1){//û�з��ϰ����� 
		puts("0");
		return;
	}
	pre=0,now=1;
	ans=0;
	dp[pre][0]=1;
	state[pre][0]=0;//��¼ǰһ����ȷ�����ӵ�״̬ 
	total[pre]=1;//��¼ǰһ����ȷ�����ӵ�״̬���
	for(int i=0;i<n;i++){//ö���� 
		for(int j=0;j<m;j++){//ö���� 
			memsetnow();//��ϣ�����
			for(int s=0;s<total[pre];s++){//ö��ǰһ����ȷ�����ӵ�����״̬��� 
				LL num=dp[pre][s];//��ȡǰһ�������� 
				int S=state[pre][s];//��ȡǰһ��״̬ 
				int p=getV(S,j); //�õ���jλ 
				int q=getV(S,j+1);//�õ���j+1λ 
				if(map[i][j]==0){//���ϰ�����һ����� 
					if(p==0&&q==0)
						HashIn(S,num);//�����ϣ�� 
					continue;
				}
				if(p==0&&q==0){//p��q��Ϊ0���ڶ������ 
					if(map[i+1][j]&&map[i][j+1]){
						int nS=S;
						setV(nS,j,1);//��jλ��Ϊ1 
						setV(nS,j+1,2);//��j+1λ��Ϊ2
						HashIn(nS,num);
					}
					continue;
				}
				if((p>0)^(q>0)){//p��q��һ��Ϊ0����������� 
					if(map[i+(p>0)][j+(q>0)])//״̬���� 
						HashIn(S,num);
					if(map[i+(q>0)][j+(p>0)]){//״̬�෴ 
						int nS=S;
						setV(nS,j,q);//p��q���� 
						setV(nS,j+1,p);
						HashIn(nS,num);
					}
					continue;
				}
				if(p==1&&q==1){//�����������4.1 
					int find=1;
					for(int v=j+2;v<=m;v++){//�����qƥ���������),��Ϊ������ 
						int k=getV(S,v);//�õ���vλ 
						if(k==1)
							find++;
						else if(k==2)
							find--;
						if(find==0){
							int nS=S;
							setV(nS,j,0);//p��q��0 
							setV(nS,j+1,0);
							setV(nS,v,1);//��Ϊ������
							HashIn(nS,num);
							break;
						}
					}
					continue;
				}
				if(p==2&&q==2){//�����������4.2 
					int find=1;
					for(int v=j-1;v>=0;v--){//��ǰ��pƥ���������(,��Ϊ������ 
						int k=getV(S,v);//�õ���vλ
						if(k==2)
							find++;
						else if(k==1)
							find--;
						if(find==0){
							int nS=S;
							setV(nS,j,0);//p��q��0 
							setV(nS,j+1,0);
							setV(nS,v,2);//��Ϊ������
							HashIn(nS,num);
							break;
						}
					}
					continue;
				}
				if(p==2&&q==1){//�����������4.3 
					int nS=S;
					setV(nS,j,0);//p��q��0 
					setV(nS,j+1,0);
					HashIn(nS,num);
					continue;
				}
				if(p==1&&q==2){//�����������4.4 
					if(i==endx&&j==endy)//���һ�����ϰ����� 
						ans+=num;
				}
			}
			swap(now,pre);
		}
		memsetnow();//��ϣ�����
		for(int s=0;s<total[pre];s++){//���д��� 
			LL num=dp[pre][s];
			int S=state[pre][s]<<2;//����һ���Ľ��ƣ�һ������λ��ʾ 
			HashIn(S,num);
		}
		swap(now,pre);
	}
	printf("%I64d\n",ans);
}
 
int main(){
	while(~scanf("%d%d",&n,&m)){
		init();//��ʼ����ͼ
		solve();
	}
	return 0;
}
