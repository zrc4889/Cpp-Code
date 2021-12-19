#include <bits/stdc++.h>
using namespace std;
int a[200000], n;
int c[200000], ans=0;
void mergeSort(int l, int r)
{
    if (l >= r)
        return;            //只有一个数直接结束
    int mid = (l + r) / 2; //取中间
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            ans += (mid - i + 1); //与左边剩余的个数分别形成逆序对
            c[k++] = a[j++];
        }
    }
    while (i <= mid)
        c[k++] = a[i++];
    while (j <= r)
        c[k++] = a[j++];

    for (int i = l; i <= r; ++i)
        a[i] = c[i];
}
int main()
{
    cin >> n;
    sort(a, a + n);
    for (int i = 1; i <= n; ++i)
        cin >> a[i];
    mergeSort(1, n); //用归并排序
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    cout << ans;
    system("pause");
}