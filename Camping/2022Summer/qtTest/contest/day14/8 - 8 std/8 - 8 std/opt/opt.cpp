#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 200000 + 10;
int T, n, a[N];
LL pre[N];
int main()
{
	freopen("opt.in", "r", stdin);
	freopen("opt.out", "w", stdout);
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		LL s = 0;
		for (int i = 1; i <= n; i++)
		{
			scanf("%d", &a[i]);
			s += a[i];
		}
		if (s % n)
		{
			printf("-1\n");
		}
		else
		{
			for (int i = 1; i <= n; i++)
				pre[i] = pre[i - 1] + a[i]; // 前缀和数组 pre
			LL sum = 0;
			for (int i = 1; i <= n; i++)
			{
				sum += abs(pre[i] - 1LL * i * (s / n));
			}
			printf("%lld\n", sum);
		}
	}
}
