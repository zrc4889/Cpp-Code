#include <iostream>
using namespace std;
int a[1000000]; //数组要定义全局
int n;
int ans = 0, sum;
//前几次CE是因为sum没定义，RE记得看数组全局加题目要求范围和优化
//CCF最新禁令：不得使用system函数，注释骂人！
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
	while (i < j)
	{
		if (a[i] + a[j] == sum)
			ans++, i++, j--;
		else if (a[i] + a[j] < sum)
			i++;
		else if (a[i] + a[j] > sum)
			j--;
	}
	cout << ans; //直接输出ans
	// system("pause");
	return 0;
}
