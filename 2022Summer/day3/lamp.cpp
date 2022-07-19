#include<iostream>
#include<cstdio>
#include<queue>
#include<cstring>
using namespace std;

struct edge{
	int to;
	int val;
	int next;
}e[200005];

int tot=0,vis[500005],last[500005];
long long dis[500005];
priority_queue<pair<int,int> >q;

void adde(int u,int v,int d) {
	++tot;
	e[tot].to=v;
	e[tot].val=d;
	e[tot].next=last[u];
	last[u]=tot;
	return;
}

long long dij(int s,int t) {
	memset(dis,0x3f,sizeof dis);
	memset(vis,0,sizeof vis);
	while (!q.empty()) q.pop();
	q.push(make_pair(0,s));
	dis[s]=0;
	vis[s]=1;
	while (!q.empty()) {
		int cur=q.top().second;
		q.pop();
		vis[cur]=false;
		for (int i=last[cur];i;i=e[i].next) {
			int ot=e[i].to;
			if (dis[cur]+e[i].val<dis[ot]) {
				dis[ot]=dis[cur]+e[i].val;
				q.push(make_pair(-dis[ot],ot));
			}
		}
	}
	return dis[t];
}

int main() {
	freopen("lamp.in","r",stdin);
	freopen("lamp.out","w",stdout);
	int x1,x2,x3,x4,m,l,r;
	scanf("%d%d%d%d%*d%d",&x1,&x2,&x3,&x4,&m);
	++x1;
	x2+=x1;
	x3+=x2;
	x4+=x3;
	for (int i=1;i<=m;++i) {
		scanf("%d%d",&l,&r);
		++r;
		adde(l,r,r-l);
		adde(r,l,r-l);
	}
	long long ans=min(min(dij(x1,x2)+dij(x3,x4),dij(x1,x3)+dij(x2,x4)),dij(x1,x4)+dij(x2,x3));
	printf("%lld",ans>=0x3f3f3f3f3f3f3f3f?-1:ans);
	return 0;
}
