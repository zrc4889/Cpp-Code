#include <bits/stdc++.h>
#define maxn 200086

using namespace std;

const int p = 998244353;

inline int fpow(int x, int y){
	int ans = 1;
	while(y){
		if(y & 1) ans = 1ll * ans * x % p;
		x = 1ll * x * x % p, y >>= 1;
	}
	return ans;
}

int n, m, x;
int a[maxn];
int sum[maxn], inv[maxn];

inline int C(int n, int m){
	return 1ll * sum[n] * inv[m] % p * inv[n - m] % p;
}

int main(){
	scanf("%d%d", &n, &m);
	sum[0] = 1;for(int i = 1;i <= m;i++) sum[i] = 1ll * sum[i - 1] * i % p;
	inv[m] = fpow(sum[m], p - 2);for(int i = m - 1;~i;i--) inv[i] = 1ll * inv[i + 1] * (i + 1) % p;
	for(int i = 1;i <= n;i++){
		scanf("%d", &x);
		for(int j = 0, k = 1;j <= m;j++, k = 1ll * k * x % p) a[j] = (a[j] + k) % p;
	}
	for(int i = 1;i <= m;i++){
		int ans = 0;
		for(int j = 0;j <= i - j;j++){
			ans = (ans + 1ll * C(i, j) * ((1ll * a[j] * a[i - j] + p - a[i]) % p) % p * (j == i - j ? fpow(2, p - 2) : 1)) % p;
		}
		printf("%d\n", ans);
	}
}