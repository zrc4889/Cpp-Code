#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int a[100001], c[100001];
int n, m;
void Mergesort(int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    Mergesort(l, mid);
    Mergesort(mid + 1, r);
    int i = l, j = mid + 1, k = 1;
    while (i <= mid && j <= r)
    {
        if (a[i] < a[j])
            c[k++] = a[i++];
        else
            c[k++] = a[j++];
    }
    for (int i = l; i <= r; ++i)
        a[i] = c[i];
}

int main()
{
    cin >> n >> m;
    for (int i = 1; i <= n + m; ++i)
        cin >> a[i];
    Mergesort(1, n+m);
    for (int i = 1; i <= m + n; ++i)
        cout << a[i] << " ";

    system("pause");
    return 0;
}