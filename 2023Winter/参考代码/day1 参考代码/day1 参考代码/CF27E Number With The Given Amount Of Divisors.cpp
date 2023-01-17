#include <bits/stdc++.h>
using namespace std;

typedef long long LL;
const int MAXN = 30;
int n, prime[MAXN] = {0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
LL ans = 0x7f7f7f7f7f7f7f7f;

void dfs(LL now, int k, int last, int cnt)
{
	if (cnt > n) return ;
	if (now <= 0ll) return ;
	if (now > ans) return ;
	if (k > 16) return ;
	if (cnt == n) {ans = now; return ;}
	for (int i = 1; i <= last; ++i)
		dfs(now *= prime[k], k + 1, i, cnt * (i + 1));
}

int main()
{
	cin >> n;
	dfs(1ll, 1, 64, 1);
	printf("%lld\n", ans);
	return 0;
}