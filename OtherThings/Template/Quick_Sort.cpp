#include <bits/stdc++.h>
using namespace std;
//数据大的时候用scanf，cin太慢
const int maxn = 1e5 + 10;
int a[maxn];
int n;
void sort(int l, int r)
{
    if (l >= r)
        return;
    // 与归并排序相同

    int p = a[r];     // a[(l+r)/2]也可以
    int i = l, j = r; // 一头一尾

    // 移动指针
    while (i <= j)
    {
        while (i <= j && a[i] < p)
            i++;
        while (i <= j && a[j] > p)
            j--;
        if (i <= j)
            swap(a[i], a[j]), i++, j--;
    }
    // [l, j] [i ,r]
    // 左右两边递归
    sort(l, j);
    sort(i, r);
}
int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(1, n);
    for (int i = 1; i <= n; i++)
    {
        cout << a[i] << " ";
    }
    // system("pause");
    return 0;
}