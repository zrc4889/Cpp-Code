#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, w;
	int a[10001];
	cin >> w >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];
	int i = 1, j = n, ans = 0;
	sort(a, a + n);
	for (int i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (a[i] + a[j] == w)
				ans++;
		}
	}

	// while (i < j)
	// {
	// 	if (a[i] + a[j] == w)
	// 		ans++, i++, j--;
	// 	else if (a[i] + a[j] > w)
	// 		j--;
	// 	else if (a[i] + a[j] < w)
	// 		i++;
	// }
	cout << ans - 1;
	return 0;
}
