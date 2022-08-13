#include<iostream>
#include<algorithm>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

typedef long long ll;

const int maxn = 1e6;

int n;
ll ans;

int main()
{
	freopen("tuple.in", "r", stdin);
	freopen("tuple.out", "w", stdout); 
	scanf("%d", &n);
	for (int i = 1; i <= n; ++i)
		for (int j = 2 * i; j <= n; j += i)
			ans += n / j - 1;
	printf("%lld\n", ans);
	return 0;
}
