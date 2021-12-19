#include <bits/stdc++.h>
using namespace std;
int n, w;
int a[30000];
int i = 1, j = n, ans = 0;
int main()
{

	cin >> w >> n;
	for (i = 1; i <= n; i++)
		cin >> a[i];
	sort(a + 1, a + n + 1);
	for (i = 1; i <= n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	i = 1, j = n, ans = 0;
	while (i < j)
	{
		cout << a[i] << " + " << a[j] << " = " << a[i] + a[j];
		if (a[i] + a[j] == w)
			ans++, i++, j--, cout << " Yes!";
		else if (a[i] + a[j] < w)
			i++;
		else if (a[i] + a[j] > w)
			j--;
		cout << endl;
	}
	cout << ans;
	system("pause");
	return 0;
}
