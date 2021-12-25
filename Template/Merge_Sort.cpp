#include <iostream>
using namespace std;
int a[100000], c[100000];
void sort(int a[10001],int l, int r)
{
    int temp[10001];
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    sort(a, l, mid);
    sort(a, mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        temp[k++] = a[i++];
    }
    while (j <= r)
    {
        temp[k++] = a[j++];
    }
    for (int i = l; i <= r; ++i)
    {
        a[i] = temp[i]; //克隆一下
    }
}

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    sort(a, 1, n);
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}