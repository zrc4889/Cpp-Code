#include <bits/stdc++.h>
using namespace std;
int a[20000]; //数组要定义全局
int n;
int ans = 0, target = 0;

int main()
{
	//相向尺取法

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cin >> target;
	sort(a , a+n);

	int minx = INT_MAX;
	int i = 1, j = n;
	while (i < j)
	{
		int temp = a[i] + a[j] - target;
		minx = min(abs(temp), minx);
		if (temp == 0)
		{
			break;
		}
		else if (temp < 0)
		{
			j--;
		}
		else if (temp > 0)
		{
			i++;
		}
	}
	cout << minx;
	// system("pause");
	return 0;
}
