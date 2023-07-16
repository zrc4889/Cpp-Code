#include <bits/stdc++.h>
using namespace std;
const int mod = 100003;
int f[1005][1005];
int vis[1005][1005]; // 障碍物
int n,m;
int main() {
	int x,y;
	cin>>n>>m;
	for (int i=1; i<=m; i++) {
		cin>>x>>y;
		vis[x][y]=1;
	}
	f[0][1] = 1; // 边界
	for (int i=1; i<=n; i++)
		for (int j=1; j<=n; j++) {
			f[i][j]=(f[i-1][j]+f[i][j-1])%mod;
			if (vis[i][j])f[i][j]=0; // 有障碍物直接清零
		}
	cout<<f[n][n]; // 终点
	return 0;
}
