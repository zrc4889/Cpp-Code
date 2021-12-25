#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int n;
int a[100000];
void bubbleSort()
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}
}

int main()
{
	cin >> n;
	//输入
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	// bubbleSort();//冒泡排序
	//直接用stl模板库
	sort(a, a + n);
	int l = n;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == a[i + 1])
		{
			l--;
		}
	}
	cout << l << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != a[i + 1])
		{
			cout << a[i] << " ";
		}
	}
	return 0;
}
