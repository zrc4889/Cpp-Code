#include<cstdio>
#define N 500005
using namespace std;

struct Edge{
    int v,nxt;
}e[N];
int head[N],tot;
int dep[N];
void AddEdge(int u,int v){
    e[++tot]={v,head[u]};head[u]=tot;
    e[++tot]={u,head[v]};head[v]=tot;
}
void dfs(int x,int f){
    dep[x]=dep[f]+1;
    for(int i=head[x];i;i=e[i].nxt){
        if(e[i].v==f)continue;
        dfs(e[i].v,x);
    }
}
int main(){
    int n,a,b;
    scanf("%d",&n);
    for(int i=1;i<n;++i){
        scanf("%d%d",&a,&b);
        AddEdge(a,b);
    }
    dep[1]=1;
    dfs(1,0);
    double ans=0.0;
    for(int i=1;i<=n;++i)
        ans+=1.0/dep[i];
    printf("%.7f",ans);
    return 0;
}