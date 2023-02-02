#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100000 + 10;
int n, k, h[MAXN], dp[MAXN];
int main()
{
	cin >> n >> k;
	for(int i = 1; i <= n; i ++)
		cin >> h[i];
	memset(dp, 0x3f, sizeof dp);
	dp[1] = 0;
	for(int i = 2; i <= n; i ++)
		for(int j = max(1, i - k); j < i; j ++)
			dp[i] = min(dp[i], dp[j] + abs(h[i] - h[j]));
	cout << dp[n];
	return 0;
}
