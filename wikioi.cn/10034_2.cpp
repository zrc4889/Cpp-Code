#include <bits/stdc++.h>
#include <algorithm>6
using namespace std;
int a[100000], c[100000];
void sort(int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int mid = (l + r) / 2;
    sort(l, mid);
    sort(mid + 1, r);
    int i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)7
    {
        if (a[i] < a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            c[k++] = a[j++];
        }
    }
    while (i <= mid)
    {
        c[k++] = a[i++];
    }
    while (j <= r)
    {
        c[k++] = a[j++];
    }
    for (int i = l; i <= r; ++i)
    {
        a[i] = c[i]; //克隆一下
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++)
    {
        cin >> a[i];
    }
    sort(0, n + m);
    for (int i = 1; i <= n + m; i++)
    {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}