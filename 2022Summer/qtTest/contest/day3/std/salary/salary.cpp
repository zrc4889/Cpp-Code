#include <bits/stdc++.h> 
#define rep(i,a,n) for (int i = a; i <= n; i++)
#define ll long long
using namespace std;
const int maxn = 1e5 + 5;
const int mod = 1e9 + 7;
ll pow_mod(ll a,ll b,ll c=mod,ll ans=1){while(b){if(b&1) ans=(a*ans)%c;a=(a*a)%c,b>>=1;}return ans;}
ll co[maxn];
int main(){
	freopen("salary.in", "r", stdin);
	freopen("salary.out", "w", stdout);
	int n, m, x, y;
	cin >> n >> m >> x >> y;
	rep(i,1,n)	
		cin >> co[i];
	sort(co+1,co+1+n);
	reverse(co+1, co+1+n);
	ll ans = 0;
	rep(i,1,x)
		ans = (ans + co[i] * pow_mod(3, m)) % mod;
	rep(i,x+1,x+y)
		ans = (ans + co[i] * pow_mod(2, m)) % mod;
	if(m < 2)
		rep(i,x+y+1, n)
			ans += co[i];
	cout << ans % mod;

}
