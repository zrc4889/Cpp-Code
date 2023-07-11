#include <bits/stdc++.h>
#define int long long
#define INF 1e7
using namespace std;
// 预计 10 pts
// 动态规划用贪心骗分

// 全部都是正数
// 前半段负数，后半段正数
// or 负数正数穿插

const int _ = 1e6 + 10;
const int MOD = 998244353;
int a[_];

inline int __pow(int x) {
	return x * x;
}
inline int __sum(int l, int r, int step) {
	int tot = 0;
	for (int i = l; i <= r; i++)
		tot += __pow(a[i] + step);
	return tot;
}

signed main() {
	int n, k;
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	int min_num = INF, min_i = INF;
	for (int i = 1; i <= n; i++) {
		if (min_num > a[i]) {
			min_num = a[i];
			min_i = i;
		}
	}
	int ans = 0;
	// 考虑最小值的正负性
//	if (min_num >= 0) {
	for (int i = 1; i <= k; i++) {
		// 空区间全部添加在首位
		ans += __sum(1, n, i);
		ans %= MOD;
	}
//	} else {
	// 最小值是负的
	// 不知道咋写了（（
//	}
	cout << ans % MOD << endl;
	return 0;
}
