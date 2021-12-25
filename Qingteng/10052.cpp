#include <bits/stdc++.h>
using namespace std;
int a[100001], c[100001];
long long ans = 0;
void sort(int l, int r)
{
    if (l >= r)
    {
        return;
    }
    long long mid = (l + r) / 2;
    sort(l, mid);
    sort(mid + 1, r);
    long long i = l, j = mid + 1, k = l;
    while (i <= mid && j <= r)
    {
        if (a[i] <= a[j])
        {
            c[k++] = a[i++];
        }
        else
        {
            ans += mid - i + 1;
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
        a[i] = c[i];
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
    sort(1, n);
    cout << ans;
    // for (int i = 1; i <= n; ++i)
    // {
    //     cout << a[i] << " ";
    // }
    // system("pause");
    return 0;
}