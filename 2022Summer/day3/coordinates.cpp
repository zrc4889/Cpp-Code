#include<iostream>
#include<cstdio>
using namespace std;

int x[255],y[255];
char ans[255][255];

int main() {
	freopen("coordinates.in","r",stdin);
	freopen("coordinates.out","w",stdout);
	int n,minx=105,miny=105,maxx=105,maxy=105;
	scanf("%d",&n);
	for (int i=1;i<=n;++i) {
		scanf("%d%d",x+i,y+i);
		x[i]+=105;
		y[i]+=105;
		minx=min(minx,x[i]);
		maxx=max(maxx,x[i]);
		miny=min(miny,y[i]);
		maxy=max(maxy,y[i]);
	}
	for (int i=maxy;i>=miny;--i) {
		for (int j=minx;j<=maxx;++j) {
			ans[i][j]='.';
			if (i==105) ans[i][j]='-';
			if (j==105) ans[i][j]='|';
			if (i==105&&j==105) ans[i][j]='+';
		}
	}
	for (int i=1;i<=n;++i) ans[y[i]][x[i]]='*';
	for (int i=maxy;i>=miny;--i) {
		for (int j=minx;j<=maxx;++j) printf("%c",ans[i][j]);
		puts("");
	}
	return 0;
}
