#include <bits/stdc++.h>
using namespace std;
const int _ = 5e6 + 10;
int k;
int a[_];
void quick_sort(int l, int r)
{
    //快排后数组被划分为三块： l<=j<=i<=r
    int i, j, mid;
    // l = i, r = j;
    i = l, j = r;
    mid = a[l + (r - l) / 2];
    do
    {
        while (a[j] > mid)
            j--;
        while (a[i] < mid)
            i++;
        if (i <= j)
            swap(a[i], a[j]), i++, j--;
    } while (i <= j);
    if (k <= j)
        quick_sort(l, j);
    else if (i <= k)
        quick_sort(i, r);
    else
    {
        cout << a[j + 1];
        return;
    }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    cin >> k;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    quick_sort(0, n - 1);
    return 0;
}