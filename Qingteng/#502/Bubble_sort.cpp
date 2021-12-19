#include <bits/stdc++.h>
using namespace std;
int a[10001], n;
void bubble_sort()
{//冒泡排序
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}

int main()
{
    // int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    bubble_sort();
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    return 0;
}