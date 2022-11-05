#include <bits/stdc++.h>
#define int long long
using namespace std;
// 预计 40 pts
bool check(int x) {
	// 判断是否可以被三整除
	// 这个 check 函数是可行的
	int tot = 0;
	while (x) {
		tot += x % 10;
		x /= 10;
	}	
	return !(tot % 3);
}
signed main() {
	int x, k;
	cin >> x >> k;
	if (x == 0)
	{
		if (k % 2) return cout << 2 << endl, 0;
		else return cout << 1 << endl, 0;
	}

	while (k --) {
		x++;
		if (check(x)) {
			x /= 3;
		}
	}
	cout << x << endl;
	return 0;
}
