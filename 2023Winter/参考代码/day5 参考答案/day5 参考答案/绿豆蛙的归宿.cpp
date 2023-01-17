#include<cstdio>
#include<cstring>
#include<iostream>
#include<queue>
using namespace std;
const int MAXX=100010;
int oud[MAXX],ind[MAXX],ver[MAXX<<1],nxt[MAXX<<1],head[MAXX],edge[MAXX<<1];
double dp[MAXX],g[MAXX];
int tot,n,m;
inline void add(int x,int y,int z){
	ver[++tot]=y;
	nxt[tot]=head[x];
	head[x]=tot;
	edge[tot]=z;
	oud[x]++;
	ind[y]++;
}
inline void topsort(){
	queue<int>q;
	for(int i=1;i<=n;++i)if(!ind[i])q.push(i);
	dp[1]=0.000;
    g[1]=1.000;
	while(q.size()){
		int x=q.front();
		q.pop();
		for(int i=head[x];i;i=nxt[i]){
			int y=ver[i];
            dp[y]+=(dp[x]*g[x]+(double)edge[i]*g[x])/(double)oud[x];
            g[y]+=g[x]/(double)oud[x];
            if(--ind[y]==0)q.push(y);
		} 
	}
}
int main(){
   cin>>n>>m;
   for(int i=1;i<=m;++i){
   	int x,y,z;
   	scanf("%d%d%d",&x,&y,&z);
   	add(x,y,z);
   }
   topsort();
   printf("%.2lf",dp[n]);
   return 0;
}