#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N = 200000 + 10;
int n;
char s[N];
int main()
{
	freopen("str.in", "r", stdin);
	freopen("str.out", "w", stdout);
	scanf("%s", s + 1);
	n = strlen(s + 1);
	int p = 0, sf = 0;
	for (int i = 1; i <= n; i++)
	{
		if (s[i] == '1')
			++p;
		else
			break;
	}
	for (int i = n; i >= 1; i--)
	{
		if (s[i] == '1')
			++sf;
		else
			break;
	}
	if (p == n)
	{
		printf("%d\n", n);
		return 0;
	}
	int ans = p + sf;
	for (int i = 1, j = 1; i <= n; i = j)
	{
		if (s[i] == '0')
		{
			++j;
		}
		else
		{
			while (j <= n && s[i] == s[j])
				++j;
			ans = max(ans, j - i);
		}
	}
	printf("%d\n", ans);
}
