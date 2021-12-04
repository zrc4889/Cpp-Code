#include <iostream>
using namespace std;
int a[1000000]; //数组要定义全局
int n;
int ans = 0, sum;

int main()
{
	//相向尺取法

	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	cin >> sum;

	int i = 1, j = n;
	// for (int i = 0; i < n; i++)
	// {
	// 	for (int j = i + 1; j < n; j++)
	// 	{
	// 		if (a[i] + a[j] == sum)
	// 		{
	// 			ans++;
	// 		}
	// 	}
	// }
	while (i < j)
	{
		if (a[i] + a[j] == sum)
		{
			ans++;
			i++;
			j--;
		}
		else if (a[i] + a[j] < sum)
		{
			i++;
		}
		else if (a[i] + a[j] > sum)
		{
			j--;
		}
	}

	cout << ans; //直接输出ans
	system("pause");
	return 0;
}
