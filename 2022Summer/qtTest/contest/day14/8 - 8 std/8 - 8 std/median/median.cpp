#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 10;
long long f[N];
int a[N], n, k, cnt, pos;
int main() {
	freopen("median.in", "r", stdin);
	freopen("median.out", "w", stdout);
	
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		if (a[i] == k) pos = i;
	}
	cnt = 0;
	f[n] ++;
	for (int i = pos - 1; i >= 1; --i) {
		if (a[i] < k) cnt --;
		else if (a[i] > k) cnt ++;
		
		f[n + cnt] ++;
	}
	cnt = 0;
	long long ans = f[n];
	for (int i = pos + 1; i <= n; ++i) {
		if (a[i] < k) cnt --;
		else if (a[i] > k) cnt ++;
		
		ans += f[n - cnt];
	}
	cout << ans;
	return 0;
} 
