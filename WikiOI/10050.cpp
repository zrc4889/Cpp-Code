#include <bits/stdc++.h>
using namespace std;
int a[10001];
int temp[10001];
int n;
int num[10001];
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
        a[i] = temp[i];
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(1, n);
    int m = a[1];
    int max = 1;
    for (int i = 1; i <= n; i++)
    {
        if (m == a[i])
        {
            num[a[i]]++;
            if (num[a[i]] > max)
            {
                max = num[a[i]];
            }
        }
        else if (m < a[i])
        {
            num[a[i]]++;
            m = a[i];
        }
    }
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for (int i = 1; i <= m; i++)
    // {
    //     cout << num[i] << " ";
    // }
    // cout << endl
    //      << "max = " << max << endl;
    int temp = 0;
    for (int i = 1; i <= n; i++)
    {
        if (num[a[i]] == max && a[i] != temp)
        {
            cout << a[i] << " " << max << endl;
            temp = a[i];
        }
    }
    // system("pause");
    return 0;
}
