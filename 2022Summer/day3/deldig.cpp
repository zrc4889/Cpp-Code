#include <iostream>
#include <cstdio>
using namespace std;

int sta[1000005] = {10};

int main()
{
	// freopen("deldig.in", "r", stdin);
	// freopen("deldig.out", "w", stdout);
	int n, kk, top = 0, k;
	scanf("%d%d", &n, &kk);
	k = kk;
	for (register int i = 1; i <= n; ++i)
	{
		char ch = getchar();
		while (ch < '0' || ch > '9')
		{
			ch = getchar();
		}
		int x = ch - '0'; // 字符串转数字吗
		while (x > sta[top] && k)
		{
			--top;
			--k;
		}
		sta[++top] = x;
	}
	for (register int i = 1; i <= min(top, n - kk); ++i)
	{
		printf("%d", sta[i]);
	}
	return 0;
}
