#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;
vector<int>G[maxn];
int cnt[maxn], minn[maxn], zero[maxn];
int co[maxn];
int cntt = 0;
int prime[maxn], vis[maxn];
void getprime(){
	for(int i=2;i<maxn;i++){
		if(!vis[i]) 
			prime[cntt++]=i;
		for(int j=0;j<cntt&&prime[j]*i<maxn;j++){
			vis[prime[j]*i]=1;
			if(i%prime[j]==0) break;
		}
	}
}

int main(){
	freopen("change.in", "r", stdin);
	freopen("change.out", "w", stdout);
	ios::sync_with_stdio(false);
	int flag = 0, n;
	getprime();
	memset(minn, 0x3f, sizeof minn);
	for(int i = 0; i < cntt; i++)
		for(int j = prime[i]; j < maxn; j += prime[i])
			G[j].push_back(prime[i]);
	cin >> n;
	for(int i = 1; i <= n; i++){
		cin >> co[i];
		if(co[i] == 1)
			continue;
		
		for(auto j:G[co[i]]){
			int tmp = 0;
			while(co[i] % j == 0){
				tmp++;
				co[i] /= j;
			}
			zero[j]++;
			cnt[j] += tmp;
			minn[j] = min(minn[j], tmp);
		}
	}
	int ans = 0;
	for(int i = 1; i < maxn; i++){
		if(zero[i] != n)	ans += cnt[i];
		else	ans += cnt[i] - n * minn[i];
	}
	cout << ans;
}