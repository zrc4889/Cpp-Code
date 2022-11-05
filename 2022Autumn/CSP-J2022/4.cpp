#include <bits/stdc++.h>
#define int long long
using namespace std;
const int _ = 3001;
// 预计 10 pts
// 整场比赛预计 100 pts

struct LINE {
	int l, r;
	int len;
} a[_];

inline __abs(int x) {
	return x < 0 ? -x : x;
}

inline bool cmp(LINE x, LINE y) {
	return x.len < y.len;
}

signed main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i].l >> a[i].r;
		a[i].len = __abs(a[i].r - a[i].l);
	}
	sort(a + 1, a + 1 + n, cmp);
	// 根据线段长度排序

	// 遍历每一条线段，找出需要涂成红色的线段
	// 统计长度取最小值

	// O(n^2) 做法
	int ans = 0x7fffffffff;
	for (int i = 1; i <= n; i++) {
		int sum = a[i].len;
		for (int j = 2; j <= n; j++) {
			if (!(a[i].l <= a[j].r && a[j].l <= a[i].r)) {
				// 如果这两条线段并不相交
				sum += a[j].len;
			}
		}
		ans = min(ans, sum);
	}
	cout << ans << endl;
	return 0;
}
