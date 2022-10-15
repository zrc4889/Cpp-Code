#include <bits/stdc++.h>
#define int long long
using namespace std;
const int INF = 1e16;
const int _ = 55;
int a[_];
int n;
int m;
int maxx(int a, int b)
{
	return a > b ? a : b;
}
// 这和昨天模拟赛第四题好像啊
bool check(int x)
{
	int t = 0;
	for (int i = 1; i <= n; i++)
		t += maxx(x - a[i], (long long)0);
	// 每张牌还差多少都加起来，用王来补
	return t <= x && t <= m;
	// 王够不够，且王有没有超出牌数限制
}
signed main()
{
	// freopen("pk.in", "r", stdin);
	// freopen("pk.out", "w", stdout);
	cin >> n >> m;

	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}

	int l = 0, r = INF;
	while (l + 1 < r)
	{
		int mid = l + r >> 1;
		if (check(mid))
			l = mid;
		else
			r = mid;
	}
	// 二分模板 2：尽量往右寻找答案
	if (check(r))
		cout << r;
	else
		cout << l;

	cout << endl;
	return 0;
}
