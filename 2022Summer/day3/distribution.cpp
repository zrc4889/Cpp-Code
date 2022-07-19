#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

#define max(a,b) (a>b?a:b)
#define min(a,b) (a<b?a:b)

int n,t,tot=0,last[105],f[105][105],clue[105];
bool vis[105];

struct edge {
    int to;
    int val;
    int next;
}e[205];

void add_edge(int u,int v,int d) {
    ++tot;
    e[tot].to=v;
    e[tot].val=d;
    e[tot].next=last[u];
    last[u]=tot;
    return;
}

void insert_edge(int u,int v,int d) {
    add_edge(u,v,d);
    add_edge(v,u,d);
    return;
}

void dp(int root) {
    f[root][0]=clue[root];
    int lson=-1;
    int lval;
    int rson=-1;
    int rval;
    for (register int i=last[root];i;i=e[i].next) {
        if (vis[e[i].to]) {
            continue;
        }
        vis[e[i].to]=true;
        dp(e[i].to);
        vis[e[i].to]=false;
        if (lson==-1) {
            lson=e[i].to;
            lval=e[i].val;
        }
        else if (rson==-1) {
            rson=e[i].to;
            rval=e[i].val;
        }
    }
    if (lson==-1) {
        return;
    }
    if (rson==-1) {
        for (register int i=lval+lval;i<=t;++i) {
            f[root][i]=max(f[root][i],f[lson][i-lval-lval]+clue[root]);
        }
    }
    else {
        for (register int i=1;i<=t;++i) {
            //CASE 1:
            if (i>=lval+lval) {
                f[root][i]=max(f[root][i],f[lson][i-lval-lval]+clue[root]);
            }
            //CASE 2:
            if (i>=rval+rval) {
                f[root][i]=max(f[root][i],f[rson][i-rval-rval]+clue[root]);
            }
            //CASE 3:
            for (register int j=lval+lval;j<=i-rval-rval;++j) {
                f[root][i]=max(f[root][i],f[lson][j-lval-lval]+f[rson][i-j-rval-rval]+clue[root]);
            }
        }
    }
    return;
}

int main() {
    freopen("distribution.in","r",stdin);
    freopen("distribution.out","w",stdout);
    int v1,v2,d1,d2,ans;
    scanf("%d%d",&n,&t);
    for (register int i=1;i<=n;++i) {
        scanf("%d",clue+i);
    }
    for (register int i=1;i<n;++i) { 
        scanf("%d%d%d%d",&v1,&d1,&v2,&d2);
        if (v1) insert_edge(i,v1,d1);
        if (v2) insert_edge(i,v2,d2);
    }
    memset(f,-1,sizeof(f));
    dp(1);
    ans=0;
    for (register int i=0;i<=t;++i) {
        ans=max(ans,f[1][i]);
    }
    printf("%d",ans);
    return 0;
}
