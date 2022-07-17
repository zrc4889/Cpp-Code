#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k;
int t;
const int maxn = 1e5 + 10;
int a[maxn];

int sum = 0;
signed main() {
	freopen("candies.in", "r", stdin);
	freopen("candies.out", "w", stdout);
	cin >> n >> k;
	for (int i = 1; i <= n; ++i) cin >> a[i];
	for (int i = 1; i < n; ++i) {
		t = (a[i] + a[i + 1]);
		if (t > k) {
			a[i + 1] = k - a[i];
			sum += t - k;
		}
	}
	cout << sum;
	return 0;
}